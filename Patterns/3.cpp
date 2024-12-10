#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout <<"enter number of rows:";
    cin >> n;

    for (i=0; i<n; i++)
    {
        for (j=1; j<=n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}