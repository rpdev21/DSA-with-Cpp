#include <iostream>
using namespace std;
int main ()
{
    int n,m,i,j;

    cout << "enter the number of rows:";
    cin >> n;

    cout << "enter number of columns:";
    cin >> m;

    int **arr = new int *[n];

    for (i=0 ; i<n; i++)
    {
        arr[i] = new int[m];
    }

    for (i=0;i<n;i++)
    {
        for (j=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    //deleting memory
    for (i=0;i<n;i++)
    {
        delete [] arr[i];
    }

    delete []arr;


}