#include <iostream>
using namespace std;
int main ()
{
    int i,j,temp;
    int arr[5];
    cout << "enter the elements of array:";
    for (i=0;i<5;i++)
    {
        cin >> arr[i];
    }

    for (i=1; i<5; i++)
    {
        temp = arr[i];
        for (j=i-1; j>=0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            break;
        }
        arr[j+1] = temp;
    }
        cout << "elements after insertion sort:";
        for (i=0; i<5; i++)
        {
            cout << arr[i] << " ";
        }
}
