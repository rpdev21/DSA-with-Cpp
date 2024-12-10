#include <iostream>
using namespace std;
int main ()
{
    char ch[10],n[10];
    int i,start,end;
    cout << "enter your name:";
    cin >> ch;
    n[10]= ch[10];

    for (i=0; ch[i] != '\0'; i++)
    {
    }
    cout << "the length of your name is:";
    cout << i;

    cout << endl;

    start =  0;
    end = i -1;
    while (start < end)
    {
        swap (ch[start++] , ch[end--]);
    }
    cout << "reverse of the name is:" ;
    cout << ch ;
    cout << endl;

    if (n == ch)
    {
        cout << "string is palindrome:" << n;
    }
    else
    cout << "string is not palindrome:" << n;

    return 0;
}