#include <iostream>
#include <map>
using namespace std;
int main ()
{
    map<int , string> m;

    m[1] = "hello";
    m[5] = "world";
    m[10] = "bye";

    m.insert({3 , "hola"});

    for (auto i:m)
    {
        cout << i.first <<":" << i.second <<endl;
    }
    cout << endl;
    m.erase(5);
    for (auto i:m)
    {
        cout << i.first <<":" << i.second <<endl;
    }

}