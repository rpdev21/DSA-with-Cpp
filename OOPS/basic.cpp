#include <iostream>
using namespace std;

class hello
{
    //properties
    private:
    string bye = "A";
    public:
    int hi = 10;

    string getbye()
    {
        return bye;

    }

    void setbye(string b)
    {
        bye = b;
    }
};
int main ()
{
    //static allocation
    hello h1;
    
    //cout << "size of :" << sizeof(h1);
    cout << h1.hi << endl;
    cout << h1.getbye() << endl; 

    //dynamic allocation
    hello *h2 = new hello();
    cout << (*h2).hi << endl;
    cout << (*h2).getbye() << endl;

     cout << h2->hi << endl;
    cout << h2->getbye() << endl;

}