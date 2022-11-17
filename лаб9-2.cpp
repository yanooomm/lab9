/* String26.Дано целое число N(> 0) и строка S.Преобразовать строку S в строку
длины N следующим образом: если длина строки S больше N, то отбросить первые символы,
если длина строки S меньше N, то в ее начало добавить символы «.» (точка).*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    string s;
    cin >> a >> s;
    if (s.size() > a)
        s.erase(0, s.size() - a);
    else
        s.insert(0, a - s.size(), '.');
    cout << s;
}

/*
4
46578
6578
*/

/*
4
12
..12
*/

/*
4
1234
1234
*/
