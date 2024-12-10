#include <iostream>
using namespace std;
int main()
{
int i,j,arr[5];
cout << "enter array elements:";
for (i=0; i<5; i++)
{
    cin >> arr[i];
}
i=0;
j=4;
while(i < j)
{
    swap (arr[i] , arr[j]);
    i++;
    j--;

}
cout << "reverse of array:";
for (i=0;i<5; i++)
{
    cout << arr[i] << " ";
}
}