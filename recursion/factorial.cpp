#include <iostream>
using namespace std;

int fact(int n)
{
    //base condition
    if(n == 0)
    return 1;

    return n * fact(n-1);
}

int main()
{
    int n;
    cout <<"enter the number:";
    cin >>n;
    int i= fact(n);
    cout << "factorial of " << n <<"is:" << i;
}