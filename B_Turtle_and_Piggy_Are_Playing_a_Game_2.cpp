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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (a.size() == 2)
        {
            cout << a[1] << endl;
        }
        else
        {

            cout << a[n / 2] << endl;
        }
    }
    return 0;
}
