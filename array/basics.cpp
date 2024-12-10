#include <iostream>
using namespace std;

//function
void printarray(int array[] , int size)
{
    cout << "printing an array" << endl;
    for (int i=0;i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "array printing done" << endl;
}


int main ()
{ 
    // declaration
    // int number[15];

    // //access of elements
    // cout << "value at index 0 " << number[0] << endl;

    //intializing an array
    int arr[3] = {1,2,3};
    printarray(arr , 3);

    // get the size of array
    int size = sizeof(arr) / sizeof(int);

    //whole size of array ,not the size required( number of elements)
    //cout << "size of array" << size;

    // right way of size
    cout << "size of array " << size;
    //cout << arr[1] << endl;

//     int third [5] = {1,3};
// // in this case all the undeclared element will bwecome 0
//     for (int i=0;i<5;i++)
//     {
//         cout << third[i] << " " ;
//     }

//     cout << endl;
//     //initializing all location with zero
//     int arr1[3] = {0};
//     for (int i =0;i<3;i++)
//     {
//         cout << arr1[i] << " ";
//     }

}