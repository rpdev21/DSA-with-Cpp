// topics math , array , sorting
#include <iostream>
using namespace std;
void triangle(int arr[])
{
    int n = 0, count = 0;
    while (n != 3)
    {
        if (arr[0] + arr[1] > arr[2])
            n = n++;
        else
            break;

        if (arr[0] + arr[1] > arr[2])
            n = n++;
        else
            break;

        if (arr[0] + arr[2] > arr[1])
            n = n++;
        else
            break;
    }

    if (n == 3)
        cout << "triangle is valid";
    else
    {
        cout << "triangle is not valid";
    }


    if (arr[0] == arr[1] && arr[1] == arr[2])
        {
            cout << "The triangle is equilateral." << endl;
        }
        else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
        {
            cout << "The triangle is isosceles." << endl;
        }
        else
        {
            cout << "The triangle is scalene." << endl;
        }
    }

int main()
{
    int arr[3], i;
    cout << "enter the elements of array:";
    for (i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    // sorting
    for (i = 1; i < 3; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];

            else
                break;
        }
        arr[j + 1] = temp;
    }

    triangle(arr);
}
