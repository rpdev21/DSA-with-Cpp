#include <iostream>
using namespace std;

class dog
{
    public:
    void bark()
    {
        cout << "bark";
    }
};

class human
{
    public:
    void talk()
    {
        cout << "talk";
    }
};

class hybrid : public dog , public human
{
    
};

int main ()
{
    hybrid h;
    h.talk();
    cout << endl;
    h.bark();

}