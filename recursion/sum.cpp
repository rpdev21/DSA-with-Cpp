#include <iostream>
using namespace std;

int sum(int arr[],int n)
{
    int sum1 = 0;

    //base case
    if (n == 0)
    return 0; 

    if(n == 1)
    return arr[0];

    int a = sum (arr+1 , n-1);
    sum1  = arr[0] + a;
    return sum1;
}

int main()
{
    int n;
    int arr [5];
    cout <<"enter the elements of array:";
    for(int i =0; i<5; i++)
    {
        cin >> arr[i];
    }
    int ans = sum(arr,5);
    cout << "sum of array elements is:" << ans;

}