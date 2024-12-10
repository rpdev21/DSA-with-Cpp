#include <iostream>
using namespace std;

int first(int arr[] , int size , int k)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }

        else if(arr[mid] > k)
            e = mid - 1;

            else
                s = mid + 1;

        mid = s + (e-s)/2;        
    }
    return ans;
}

int second(int arr[] , int size , int k)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }

        else if(arr[mid] > k)
                e = mid - 1;

            else
                s = mid + 1;

        mid = s + (e-s)/2;        
    }
    return ans;
}

int main()
{
    int arr[5] = {1,2,3,3,5};
    cout << "the first index of 3 is:" << first(arr , 5 , 3) << endl;
    cout << "the second index of 3 is:" << second(arr ,5 ,3) << endl;
    cout << "totol no. of occurence of 3 is:" << (second(arr , 5 ,3) - first(arr , 5, 3)) + 1 << endl;
}