#include <iostream>
#include <list>
using namespace std;
int main ()
{
    list<int> l;
    l.push_back(3);
    l.push_front(2);

    for(int i:l)
    {
        cout <<i << " ";
    }

    /*l.erase(l.begin());
   for (int i:l)
    {
        cout << i << " ";
    }*/

    list <int> n(l);//(5,20);
    for (int i :n)
    {
        cout << i << " ";
    }

}