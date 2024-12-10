#include <iostream>
using namespace std;
int main ()
{
    char ch[10];
    int i,start,end;
    cout << "enter your name:";
    cin >> ch;

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
    cout << ch;

    return 0;
}