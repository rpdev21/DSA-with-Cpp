#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {2,4,5,6,2};
    int i=3;
    cout << " address of first memory block :" << arr << endl;
    cout << " address of first memory block :" << &arr[0] << endl;

    cout << "value is:" << *arr+1 << endl;
    cout << "value is:" <<*(arr+2) << endl;
    cout << "value is:" <<*(i+arr);

    // address of arr[i] = *(arr + i) 
    
    
}