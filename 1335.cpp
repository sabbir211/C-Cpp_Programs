#include <iostream>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    if (n < 3)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        int result=(n-1)/2;
        cout<<result<<endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}
