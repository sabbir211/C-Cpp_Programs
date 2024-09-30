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
        vector<int> a(n + 2, -1);
        bool x = true;
        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin >> temp;
            if (i == 1)
            {
                a[temp] = 1;
            }
            else
            {
                if (a[temp + 1] > -1 || a[temp - 1] > -1)
                {
                    a[temp] = 1;
                }
                else
                {
                    x = false;
                }
            }
        }
        // for (auto &&i : a)
        // {
        //     cout<<i<<" ";
        // }

        if (x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        a.clear();
    }
}