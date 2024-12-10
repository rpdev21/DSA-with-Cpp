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

class husky : public dog{};

int main ()
{
    husky h;
    h.speak();

}