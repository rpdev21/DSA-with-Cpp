#include <iostream>
using namespace std;

void sort(int arr[] ,int n)
{
    //base case
    if(n == 0 || n == 1)
     return ;

    for(int i=0;i<n-1 ;i++)
    {
        if(arr[i] > arr[i+1])
         swap(arr[i] , arr[i+1]);
    }

    sort(arr , n-1);
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
    sort(arr,n);
    for(int i= 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }


}