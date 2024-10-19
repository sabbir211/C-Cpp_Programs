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
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i <= n - 3)
                sum += a[i];
        }
        if (n >= 3)
        {

            cout << a[n - 1] - (a[n - 2] - sum) << endl;
        }
        else
        {
            cout << a[n - 1] - a[n - 2] << endl;
        }
    }
}