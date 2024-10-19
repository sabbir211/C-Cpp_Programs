#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, y;
        cin >> x >> y;
        int h = min(x, y);
        if (n%h  == 0)
        {
            cout << n/h << endl;
        }
        else
        {
            cout << n/h + 1 << endl;
        }
    }
}