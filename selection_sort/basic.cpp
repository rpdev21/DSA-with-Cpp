#include <iostream>
using namespace std;
int main ()
{
    int i,j,min;
    int arr[5];
    cout << "enter the elements of array";
    for (i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    for (i=0; i<4; i++)
    {
        min = i;
        for (j=i+1; j<5; j++)
        {
            if(arr[j] <  arr[min])
            {
                min = j;
            }
             swap (arr[min] , arr[i]);
        }
    }
    cout << "array after selection sort:";

    for (i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }


}