#include <iostream>
using namespace std;

bool is_even()
{
    int n;
    cout <<"enter the number:" << endl;
    cin >> n;

    if (n & 1)
    {
        return 0;
    }
    return 1;
}
int main ()
{
    if(is_even())
    {
        cout << "number is even";
    }
    else
    cout << "number is odd";

}