#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
    return 0;

    if (n == 1)
    return 1;

     cout << (n-1) <<" "<<  (n-2);

    fib (n-1) + fib (n-2);
   



}

int main()
{
    int n;
    cin >> n;
    int i = fib(n);
    cout << i;
    
}