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
        int mini = INT_MAX;
        int miniIndx;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < mini)
            {
                mini = a[i];
                miniIndx = i;
            }
        }
        a[miniIndx]++;
        long long x = 1;
        for (int i = 0; i < n; i++)
        {
            x *= a[i];
        }
        cout<<x<<endl;
    }
}