#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int count = 1;
        int turn1 = 0;
        int turn2 = 0;
        if (a > 0 && a <= k)
        {
            turn1 = 1;
        }
        else
        {
            turn1 = a / k + 1;
        }
        if (b > 0 && b <= k)
        {
            turn2 = 1;
        }
        else
        {
            turn2 = b / k + 1;
        }

        if (turn1 < turn2)
        {
            cout << turn1 + 1 + turn2;
        }
        else if (turn1 > turn2)
        {
           cout<< turn1 + turn2;
        }
        else
        {
            cout << turn1 + turn2;
        }

        cout << endl;
    }
}