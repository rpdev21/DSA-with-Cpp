#include <iostream>
using namespace std;

void update(int &n)
{
    n = n+10;
}
int main ()
{
    int i =5;
    int &j = i;
    cout << "value of i :" << i << endl;
    i++;
    cout << "value of i :" << j << endl;
    j++;
    cout << "value of i :" << i << endl;

    cout << "before function:" << i << endl;
    update(i);
    cout << "after function:" << i << endl;
}