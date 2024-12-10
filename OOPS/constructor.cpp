#include <iostream>
using namespace std;

class hero
{
    public:
    string name;
    //default constructor
    hero()
    {
        cout << "ritik";
    }

    //parameterized constructor
    hero(string name)
    {
        cout << this << endl;
        this -> name = name;
    }

    void print()
    {
        cout << name << endl;

    }
};

int main()
{
    cout << "hi" << endl;
    hero h1;
    cout << endl;
    cout << "you are great" << endl;

    hero h2("Ritik");
    cout << "address of name :" << &h2 << endl;
     
     //copy constructor
    hero r("ritik");
    r.print();

    hero s(r);
    s.print();


}