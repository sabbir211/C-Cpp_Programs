#include <iostream>
using namespace std;
#include<math.h>
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int restPart = m - k;
    int c = ceil((n + m - 1) / m);
    int change = n - c;

    cout << (change > k ? "YES" : "NO") << endl;
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