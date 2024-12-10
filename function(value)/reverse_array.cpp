#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap (arr[start] , arr[end]);
        start ++;
        end --;
    }

    for (int i =0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
int i,arr[100],n;
cout << "enter the size of array:";
cin >> n;
}