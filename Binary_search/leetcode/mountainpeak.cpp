#include <iostream>
using namespace std;

int peak(int arr[] , int size)
{
int s = 0;
int e = size - 1;
int mid = s + (e-s)/2;

while(s < e)
{
    if ( arr[mid] < arr[mid+1])
        s = mid + 1;

    else
        e = mid;

    mid = s + (e-s)/2;        
}
    return s;
}

int main()
{
    int arr[5] = {3,5,4,1,0};
    cout << "the index of peak element is:" << peak(arr , 5) << endl;
}