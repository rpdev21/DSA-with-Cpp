#include <iostream>
#include <array>

using namespace std;
int main ()
{
    array<int , 4> a = {1,2,3,4};

    int size = a.size();
    cout <<"element at 2nd index:" << a.at(2) <<endl;
    cout << "array empty or not:" << a.empty() << endl;
    cout << "first element:" << a.front() << endl;
    cout << "last element:" << a.back();
    }