#include <iostream>
using namespace std;

void digit(int n,string arr[])
{
    if(n == 0)
    return;

    int digit1 = n % 10;
    n = n / 10;

    digit (n , arr);

    cout << arr[digit1] << " ";

}
int main()
{
    int n;
    string arr[10] ={"zero","one","two","three" ,"four","five","six","seven","eight","nine"};
    cin >> n;
    digit(n,arr);
}