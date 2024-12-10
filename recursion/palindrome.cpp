#include <iostream>
using namespace std;

bool reverse(string str , int s , int e)
{
    
    //base case
    if (s >= e)
    return true;

    if(str[s] != str[e])
     return false;
    else
    return reverse(str,s+1,e-1);


}

int main ()
{
    string str;
    cout << "enter the string:";
    cin >> str;

    int i =0;
    int j =str.length() - 1;

   bool ans = reverse(str , i , j);
    if(ans)
    cout << "string is palindrome";
    else
    cout << "string is not palindrome";
}

