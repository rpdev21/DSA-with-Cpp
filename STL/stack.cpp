#include <iostream>
#include <stack>
using namespace std;
int main ()
{
    stack <int> s;
    s.push(4);
    s.push(5);
    s.push(6);

   cout << s.top() << endl;
   s.pop();
   cout << s.top();
}