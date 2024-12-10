#include <iostream>
using namespace std;
int main ()
{
    int i,j,arr[5],min;
    cout <<"enter array elements:";
    for (i=0; i<5; i++)
    {
        cin >> arr[i];
    }

    for (i=0; i<5; i++)
    {
        for (j=0; j<5-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    cout << "array after bubble sort:";
    for (i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
}