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
        int maxE = INT_MIN;
        int minE = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxE = max(a[i], maxE);
            minE = min(a[i], minE);
        }
        cout<<(n-1)*(maxE-minE)<<endl;
    }
}