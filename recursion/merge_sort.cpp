#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values to temporary arrays
    int k = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[k++];
    }

    k = mid + 1; // Correct index for the second half
    for (int i = 0; i < len2; i++) {
        second[i] = arr[k++];
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) { // Changed to <= for stability
            arr[k++] = first[index1++];
        } else {
            arr[k++] = second[index2++];
        }
    }

    // Copy remaining elements of first array if any
    while (index1 < len1) {
        arr[k++] = first[index1++];
    }

    // Copy remaining elements of second array if any
    while (index2 < len2) {
        arr[k++] = second[index2++];
    }

    // Clean up temporary arrays
    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;

    // Recursively sort the first and second halves
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);

    // Merge the sorted halves
    merge(arr, s, e);
}

int main() {
    int arr[10] = {2, 8, 7, 55, 44, 23, 10, 45, 78, 90};
    int n = 10;

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}