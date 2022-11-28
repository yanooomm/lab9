/*String46. Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). Найти длину самого длинного слова*/

#include <iostream>
#include <string> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string s;
    getline(cin, s);
    int maxx = 0, count = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] != ' ') count += 1;
        else
        {
            if (count != 0) 
                maxx = max(maxx, count);
            count = 0;
        }
    }
    cout << maxx;
}

/*
вертолет имя самолет фамилия закат
8
*/

/*
ищем самое длинное слово
7
*/

