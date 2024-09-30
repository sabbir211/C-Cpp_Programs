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
        vector<int> a(n + 1);
        vector<int> b(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        if (n == 2 && (a[n / 2] == b[n / 2] || a[n / 2 + 1] == b[n / 2 + 1] || a[n / 2] == b[n / 2 + 1] || a[n / 2 + 1] == b[n / 2]))
        {
            cout <<"Bob"<<endl;
        }
        else if (n % 2 == 0 && n>2 && (a[n / 2] == b[n / 2] || a[n / 2 + 1] == b[n / 2 + 1]))
        {
            cout << "Bob" << endl;
        }
        else if (n % 2 != 0 && (a[n / 2 + 1] == b[n / 2 + 1]))
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
}