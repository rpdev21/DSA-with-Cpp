// #include <iostream>
// using namespace std;

// int pivot(int arr[] , int size)
// {
//     int s = 0;
//     int e = size -1;
//     int mid = s + (e-s)/2;

//     while (s < e)
//     {
//         if (arr[mid] > arr[0])
//         {
//             s = mid + 1;
//         }

//         else{
//             e = mid;
//         }

//         mid = s + (e-s)/2;
//     }
//     return s;
// }


// int binary(int arr[]  ,int s1, int e1 , int k)
// {
//     int s = s1;
//     int e = e1;
//     int mid = 0;
//     while ( s <= e)
//     {
//         mid = s + (e-s)/2;
//         if (arr[mid] == k)
//         return mid;

//         if(arr[mid] > k)
//         e = mid - 1;

//         else
//         s = mid + 1;

//         //mid = s + (e-s)/2;
//     }

//     return -1;

// }
// int main()
// {
//     int arr[5] = {3,7,9,0,1};
//     int k;
//     cout << "enter the element to search" << endl;
//     cin >> k;
//     int pivot1 = pivot(arr , 5);
//     if (arr[pivot1] < k && k < arr[4])
//     {
//         cout << binary (arr ,pivot1 , 4 , k) << endl;

//     }

//     else{
//         cout << binary(arr ,0,pivot1 - 1 ,k) << endl;
//     }

// }

#include <iostream>
using namespace std;

int pivot(int arr[], int size) {
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binary(int arr[], int s1, int e1, int k) {
    int s = s1;
    int e = e1;
    int mid;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (arr[mid] == k)
            return mid;

        if (arr[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main() {
    int arr[5] = {3, 7, 9, 0, 1};
    int k;
    cout << "Enter the element to search: ";
    cin >> k;
    
    int pivot1 = pivot(arr, 5);
    
    int result;
    if (k >= arr[pivot1] && k <= arr[4]) {
        result = binary(arr, pivot1, 4, k);
    } else {
        result = binary(arr, 0, pivot1 - 1, k);
    }
    
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}
