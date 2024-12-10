#include <iostream>
using namespace std;

bool binary(int arr[] , int s , int e , int num)
{
    //base case
    if (s > e)
     return false;

    //processing
    int mid = s + (e-s)/2;
    if (arr[mid] == num)
     return true;

    if (arr[mid] > num)
    return binary(arr,s,mid-1,num);
    else
    return binary(arr,mid+1,e,num);

}

int main()
{
    int n,num;
    cout << "enter size of array:";
    cin >> n;
    int s = 0;
    int e = n-1;
    int *arr = new int[n];
    cout <<"enter the elements of array:";
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element for searching:";
    cin >> num;
   bool ans = binary(arr,s,e,num);

   if(ans)
   cout << "element is found";
   else
   cout << "element is not found";

   delete []arr;
   }