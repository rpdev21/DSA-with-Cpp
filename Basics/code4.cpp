#include <iostream>
using namespace std;
int main()
{
    //greatest among three numbers
    int a,b,c;
    cout <<"enter three numbers:" <<endl;
    cout <<"enter first number:";
    cin >>a;
    cout <<"enter second number:";
    cin >>b;
    cout <<"enter third number:";
    cin >>c;

    if(a>b && a>c)
    cout <<"the largest number is:" << a;
    else if(b>c)
    cout << "the largest number is:"<<b;
    else
    cout <<"the largest number is:" <<c;
}