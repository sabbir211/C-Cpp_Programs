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
        string s;
        cin >> s;
        if (sqrt(n) * sqrt(n) != n)
        {
            cout << "NO" << endl;
        }
        else
        {
            int a = count(s.begin(), s.end(), '1');
            int b = count(s.begin(), s.end(), '0');
            int x = sqrt(n);
            if (a == x * 4 - 4)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}