#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin>>a>>b;
        int result = abs(a - b)+9;
        int r=(result/10);
        cout<<r<<endl;
    }
}