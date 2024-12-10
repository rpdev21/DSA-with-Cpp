#include <iostream>
using namespace std;
int main()
{
    // check number is positive ,negative or zero
    int n;
    cout <<"enter any number:";
    cin >>n;

    if (n >0)
        cout <<"number is positive";
    else if(n<0)
       cout << "number is negative";
    else
       cout <<"number is zero";

}