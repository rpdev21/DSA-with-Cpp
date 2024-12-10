// check if th input number is power of 2
#include <iostream>
#include <math.h>
 using namespace std;
 int main()
 {
    int n,count=0;
    cout <<"enter a number:";
    cin >> n;

    for (int i=0 ; i<31 ; i++)
    {
        int ans = pow (2,i);
        if (n == ans)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        cout << "the input number is power of 2";
    }
    else
    {
        cout << "tne number is not the power of 2";
    }

 }