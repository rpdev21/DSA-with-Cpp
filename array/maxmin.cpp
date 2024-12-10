#include <iostream>
#include <climits>
using namespace std;

//function
int max(int arr[] ,int n )
{
    int max = INT_MIN;
    for (int i =0;i<n;i++)
    {
        //maxi = max(maxi , arr[i]);
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[] ,int n )
{
    int min  = INT_MAX;
    for (int i =0;i<n;i++)
    {
        //mini = min(mini , arr[i]);
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    int arr[100];
    cout << " enter the elements of array" << endl;
    for (int i =0;i<n;i++)
    {
        cin >> arr[i];
    }

     cout << "the elements of array are:" << endl;
    for (int i =0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int maximum_value = max(arr , n);
    cout << maximum_value << endl;

     int minimum_value = min(arr , n);
    cout << minimum_value << endl;

}