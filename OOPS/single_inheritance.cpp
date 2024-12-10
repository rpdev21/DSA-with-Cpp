#include <iostream>
using namespace std;

class animal
{
    public:
    void speak()
    {
        cout << "speak";
    }
};

class dog : public animal
{
    
};

int main ()
{
    dog d;
    d.speak();

}