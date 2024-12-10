#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("hello");
    q.push("world");
    q.push("bye");

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
}
