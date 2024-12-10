#include <iostream>
#include <queue>
using namespace std;
int main()
{
    //max_heap
    priority_queue<int> max;
    max.push(5);
    max.push(4);
    max.push(0);
    max.push(2);

    int n =max.size();

    for (int i=0; i<n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;
    //min_heap
    priority_queue<int , vector<int> , greater<int> > min;
    min.push(5);
    min.push(4);
    min.push(0);
    min.push(2);

    int m =min.size();

    for (int i=0; i<m; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }
}
