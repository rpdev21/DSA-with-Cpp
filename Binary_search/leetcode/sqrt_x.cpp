#include <iostream>
using namespace std;

int binary(int k)
{
    int s = 1;
    int e = k;
    int mid;
    while ( s <= e)
    {
        mid = s + (e-s)/2;
        if (mid * mid  == k)
        return mid;

        if(mid*mid > k)
        e = mid - 1;

        else
        s = mid + 1;

    }

    return e;


}

int main()
{
    int k,value;
   // int arr[100];

    cout << "enter the value for the squareroot:";
    cin >> k;

   /* for (int i =0 ; i<k ; i++)
    {
        arr[i] = i+1;
    }
    */

    value = binary (k); 
    cout << "square root of element is: " << value << endl;


    
}