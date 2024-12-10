#include <iostream>
using namespace std;

void reverse(string &str , int s , int e)
{
    //base case
    if (s >= e)
    return;

    swap(str[s] , str[e]);
    s++;
    e--;

    reverse(str,s,e);


}

int main ()
{
    string str;
    cout << "enter the string:";
    cin >> str;

    int i =0;
    int j =str.length() - 1;

    reverse(str , i , j);
    cout << str;
}

