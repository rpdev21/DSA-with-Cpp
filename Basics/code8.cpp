#include <iostream>
using namespace std;
int main()
{
    //checking the given variable
    char ch;
    cout << "enter a value";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z')
    cout <<"entered value is uppercase";

    else if(ch >= 'a' && ch <= 'z')
    cout <<"entered value is lowercase";

    else
    cout <<"entered value is a number";
}