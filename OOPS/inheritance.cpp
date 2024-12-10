#include <iostream>
using namespace std;

class human
{
    public:
    int age;
    int weight;
    int height;
};

//inheritance
class male : public human
{
    public:
    void hello()
    {
        cout << "hello i am male";
    }
};

int main ()
{
    male h1;
    cout << h1.age << endl;
    cout << h1.weight << endl;
    h1.hello();

}