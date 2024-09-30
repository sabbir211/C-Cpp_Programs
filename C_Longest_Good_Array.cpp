#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int x = l + 1;
        int count = 1;
        if (r - l <= 1)
            cout << r - l + 1 << endl;
        else
        {
            for (int i = 2; x <= r; i++)
            {
                count++;
                x += i;
            }
            cout<<count<<endl;
        }
    }
}