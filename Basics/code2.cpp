#include <iostream>
using namespace std;
int main()
{
    //simple interest
    int p,r,t;
    cout <<"enter the principle:";
    cin >>p;
    cout <<"enter the rate:";
    cin>>r;
    cout << "enter the time:";
    cin >> t;
    float si=(p*r*t)/100.0;
    cout<<"simple interest is:" << si;
    
}