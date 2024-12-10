#include <iostream>
using namespace std;
int main()
{
    int n,num=0;
    cout <<"enter the number: ";
    cin >> n;
    int m = n;

    while(m != 0)
    {
        num = (num << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & num;

    cout << "the complement of number is:" << ans;

}