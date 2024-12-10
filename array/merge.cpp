#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    int arr[5] = { 2, 1, 3, 0, 5 };
    int arr1[5] = { 10, 9, 8, 4, 6 };
    int arr2[10] = {0};

    i=0; j=0; k=0;
    while( i < 5 && j <5)
    {
        if (arr[i] < arr[j])
        {
            arr2[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            arr[2] = arr1[j];
            j++;
            k++;
        }
    }
    while (i < 5)
    {
        arr2[k] = arr[i];
        i++;
        k++;
    }
    while(j < 5)
    {
        arr2[k] = arr1[j];
        j++;
        k++;
    }

    for (i=0; i<5; i++)
    {
        cout << arr2[i] << endl;;
    }
}