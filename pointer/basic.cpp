#include <iostream>
using namespace std;
int main ()
{
    int num = 5;
    int *p = &num;

    cout << "address of num is:" << p << endl;
    cout << "value of num is:" << *p << endl;

    double d = 2.4;
    double *pd = &d;
    cout << "address of d is:" << pd << endl;
    cout << "value of d is:" << *pd << endl;

    cout << "size of pointer :" << sizeof(p) << endl;
    cout << "size of value is :" << sizeof(num) << endl; 

    cout << "size of address :" << sizeof(pd) << endl;
    cout << "size of value is :" << sizeof(*pd) << endl; 

    (*p)++;
    cout << "after increment :" << num << endl;

    //copying a pointer
    int *q = p;
    cout << *p << "---" << *q << endl;
    cout << p << "---" << q << endl;

}