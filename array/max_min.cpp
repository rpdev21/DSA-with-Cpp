//to find th maximum and minimum number
#include <iostream>
using namespace std;

void max()
{
    int arr[10];
    int size,max,min,i;
    cout << "enter the size of array:";
    cin >> size;
  
    cout <<"enter the elements of array:"<< endl;

    for (int i=0 ; i <size ; i++)
    {
        cin >> arr[i];
    }

    min = i =0;
    for (int i=0; i<size ; i++)
    {
        
        if (arr[min] > arr[i+1])
        {
            swap (arr[i+1],arr[min]);
        }
    }

    cout << "the maximum and minimum value of aaray are :" << arr[min] << arr[size - 1];
}
int main ()
{
    max();
}