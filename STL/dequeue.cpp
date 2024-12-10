#include <iostream>
#include <deque>

using namespace std;
int main ()
{
    deque<int> d;

    d.push_back(2);
    d.push_front(3);

    int size = d.size();
    cout <<"element at 2nd index:" << d.at(1) <<endl;
    cout << "array empty or not:" << d.empty() << endl;
    cout << "first element:" << d.front() << endl;
    cout << "last element:" << d.back()  << endl;
    d.erase(d.begin() , d.begin()+1);
    for (int i:d)
    {
        cout << i << endl;
    }
    }