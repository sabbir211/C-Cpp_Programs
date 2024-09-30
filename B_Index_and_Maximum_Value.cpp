#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = *max_element(a.begin(), a.end());
        for (int i = 0; i < m; i++)
        {
            char c;
            int l, r;
            cin >> c >> l >> r;

            if (c == '+')
            {
                if (max >= l && max <= r)
                {
                    max++;
                }
            }
            else if (c == '-')
            {

                if (max >= l && max <= r)
                {
                    max--;
                }
            }

            cout << max << " ";
        }
        cout << endl;
    }
}