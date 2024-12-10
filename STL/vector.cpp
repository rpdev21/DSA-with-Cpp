#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int> v;
    cout <<"capacity " <<v.capacity() << endl;

    v.push_back(9);
    cout <<"capacity " << v.capacity() << endl;

     v.push_back(8);
    cout <<"capacity " << v.capacity() << endl;

     v.push_back(0);
    cout <<"capacity " << v.capacity() << endl;

    cout << "size" << v.size() << "capacity" << v.capacity() << endl;

    cout << "before pop:" <<endl;
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop:" <<endl;
    for (int i:v)
    {
        cout << i << " ";
    }


    v.clear();
    cout << "size" << v.size() << v.capacity();
    
}