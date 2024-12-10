#include <iostream>
using namespace std;

bool search(int arr[] ,int n ,int num)
{
    //base case
    if(n == 0)
    return false;

        if (arr[0] == num)
        return true;

    return search(arr+1 , n-1 , num);

}

int main()
{
    int n,num;
    cout << "enter size of array:";
    cin >> n;
    int *arr = new int[n];
    cout <<"enter the elements of array:";
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element for searching:";
    cin >> num;
   int ans = search(arr,n,num);

   if(ans)
   cout << "element is found";
   else
   cout << "element is not found";

   delete []arr;
   }