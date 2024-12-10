#include <iostream>
using namespace std;
int main()
{
    //sum of all even numbers
    int n, sum=0;
    cout << "enter range of numbers:";
    cin >> n;
    for ( int i=1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    }
    cout <<"sum of even numbers upto " << n << " is:" << sum;

}