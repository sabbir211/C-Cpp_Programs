#include <iostream>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a * 2 <= b)
    {
        cout << n * a << endl;
    }
    else
    {
        int peers = n / 2;
        int rest = n % 2;
        int totalMoney = peers * b + rest * a;
        cout << totalMoney << endl;
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

    return 0;
}