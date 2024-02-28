#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string x;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if (x=="X++"|| x=="++X")
        {
            count++;
        }
        if (x=="X--"|| x=="--X")
        {
            count--;
        }
    }
   cout<<count;

}