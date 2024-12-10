#include <iostream>
using namespace std;
int main ()
{
    int i =5;
    int* p = &i;
    int** p2 = &p;

    //printing i address
    cout << "the value of i address is:" << &i << " " << p << " " << *p2 << endl; 

    //printing value of i
    cout << "the value of i is:" << i << " " << *p <<" " << **p2 << endl;;

    //printing value of p
    cout << "the value of p is:" << &i << " " << p <<" " << *p2 << endl;;

    //printing address of p
     cout << "the value of p address is:" << &p << " "<< p2 << endl;

     //printing value of p2
     cout << "the value of p2 is:"<< &p <<" " << p2 << endl;;

     //printing address of p2
     cout << "the value of p2 address is:" << &p2;





}