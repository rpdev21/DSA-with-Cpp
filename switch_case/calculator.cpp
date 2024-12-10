#include <iostream>
using namespace std;
int main ()
{
    int a=5,b=6;
    char c ;
    cout << "enter the operator:";
    cin >> c;

    switch(c)
    {
        case '+':
        cout << "addition of two number is:" << a+b;
        break;

        case '-':
        cout << "subtraction of two number is:" << a-b;
        break;

        case '/':
        cout << "division of two number is:" << a/b;
        break;

        case '*':
        cout << "multiplication of two number is:" << a*b;
        break;
    }
}