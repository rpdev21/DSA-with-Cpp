#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k=1;
    cout <<"enter number of rows:";
    cin >> n;

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
        k--;
    }
}