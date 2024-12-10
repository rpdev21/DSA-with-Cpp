#include <iostream>
using namespace std;

int binary(int arr[] , int n , int k)
{
    int s = 0;
    int e = n-1;
    int mid = 0;
    while ( s <= e)
    {
        mid = s + (e-s)/2;
        if (arr[mid] == k)
        return mid;

        if(arr[mid] > k)
        e = mid - 1;

        else
        s = mid + 1;

        mid = s + (e-s)/2;
    }

    return mid+1;

}

int main()
{
    int n,k,index;
    int arr[20];
    cout << "enter the size of array:";
    cin >> n;

    cout << "enter the elements of array:"<< endl;
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << "enter the value to be searched:";
    cin >> k;

    index = binary (arr , n , k); 
    cout << "index of element is: " << index << endl;


    
}