#include <iostream>
using namespace std;

int main()
{
    pair <int , string> p;
    p = {1 , "hello"};
    cout << p.first << " " << p.second << endl;

    pair <int , int> p_array[3];
    p_array[0] = {1 , 2};
    p_array[1] = {13, 2};
    p_array[2] = {12 , 2};
    swap(p_array[0] , p_array[2]);
    for (int i =0;i<3;i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }


}