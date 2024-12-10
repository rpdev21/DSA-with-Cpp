//26.Remove Duplicate Elements From Sorted Array
#include <iostream>
using namespace std;

int duplicate(int arr[] , int size)
{
    int i,temp,j,count=size,arr1[100],k=0;
    bool a;
    for (i=0;i<size;i++)
    {
        temp = arr[i];
        for (j=i-1;j>=0;j--)
        {
            if (arr[j] == temp)
            {
                count--;
                a = false;
                break;
            }
        }

        if (a)
        {
            while(k < size)
            {
                arr1[k] = arr[i];
                k++;
                break;
                
            }
        }
    } 
    
    for(i=0;i<size;i++)
    {
        cout << arr1[i] << " ";
    }
    return count;

}

int main()
{
    int arr[5];
    cout <<"enter the elements of array";

for (int i=0;i<5;i++)
{
    cin >> arr[i];
}
cout <<"number of unique elements in array is "<<duplicate(arr,5)<<endl;


}