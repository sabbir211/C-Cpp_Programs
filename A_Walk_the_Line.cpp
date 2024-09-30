#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int i = 1;
    while (i <= t)
    {

        long long n, k;
        cin >> n >> k;
        long long mini = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            if (mini > temp)
            {
                mini = temp;
            }
        }
        long long x = (n + 1) * mini;
        if (n <= 2 && mini <= k)
        {
            cout << "Case " << "#" << i << ":" << " YES" << endl;
        }
        else if (n >= 2 && x <= k)
        {
            cout << "Case " << "#" << i << ":" << " YES" << endl;
        }
        else
        {
            cout << "Case " << "#" << i << ":" << " NO" << endl;
        }

        i++;
    }
}