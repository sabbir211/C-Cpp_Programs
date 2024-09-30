#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mini = min(a, min(b, c));
        int maxi = max(a, max(b, c));
        int ar[3] = {a, b, c};
        for (int i = 0; i < 3; i++)
        {
            if (ar[i] == mini || ar[i] == maxi)
            {
                continue;
            }
            else
            {
                cout << ar[i] << endl;
                break;
            }
        }
    }
}