#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<int> moments;
    bool rest = true;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        moments.push_back(temp);
    }
    int previous = 0;
    for (int i = 0; i < n; i++)
    {
        int x = min(abs(moments[i] - previous) * a, b);
        f -= x;
        previous = moments[i];
    }
    if (f > 0)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
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
