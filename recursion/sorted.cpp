#include <iostream>
using namespace std;

bool sorted(int arr[],int n)
{
    if (n == 0 || n == 1)
    return true;

    if (arr[0] > arr[1])
    return false;

    else
    return sorted(arr+1,n-1);

}

int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    int *arr = new int[n];
    cout <<"enter the elements of array:";
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
   cout << sorted(arr,n);

}