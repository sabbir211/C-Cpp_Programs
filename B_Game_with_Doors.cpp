#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int t, l, r, L, R, doors, i, cond;

        doors = 0;
        cin >> l >> r;
        cin >> L >> R;
        if (L >= r + 1 || l >= R + 1)
        {
            doors++;
        }
        else if (l == L && r == R)
        {
            doors = R - L;
        }
        else
        {
            if (l == L)
            {
                i = L;
            }
            else
            {
                i = max(l, L) - 1;
            }
            if (r == R)
            {
                cond = min(r, R) - 1;
            }
            else
            {
                cond = min(r, R);
            }
            for (; i <= cond; i++)
            {
                doors++;
            }
        }
        cout << doors << endl;
    }
}