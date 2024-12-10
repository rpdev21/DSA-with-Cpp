#include <iostream>
using namespace std;
int main()
{
    //number is prime or not
    int n,count;
    cout <<"enter any number:";
    cin >>n;

    for(int i=2;i<n/2+1;i++)
    {
        if(n % i == 0)
        {
        cout <<"number is not prime";
        count =1;
        break;
        }
    }
    if(count !=1)
    cout <<"number is prime";
}