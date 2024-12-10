#include <iostream>
using namespace std;
int main ()
{
    int n,num=1,m;
    cout << "enter the amount:";
    cin >> n;

    switch(num)
    {
        case 1:
        m = n / 100;
        n = n - (m * 100);
        cout << "number of hundred note is:" << m << endl;
        
        case 2:
        m = n / 50;
        n = n - (m * 50);
        cout << "number of fifty note is:" << m << endl;

        case 3:
        m = n / 20;
        n = n - (m * 20);
        cout << "number of twenty note is:" << m << endl;

         case 4:
        m = n / 1;
        n = n - (m * 1);
        cout << "number of one note is:" << m << endl;
    }
}