#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int t = 6 - max(a, b) + 1;
    if (t == 1)
    {
        cout << 1 << "/" << 6;
    }
    else if (t == 2)
    {
        cout << 1 << "/" << 3;
    }
    else if (t == 3)
    {
        cout << 1 << "/" << 2;
    }
    else if (t == 4)
    {
        cout << 2 << "/" << 3;
    }
    else if (t == 5)
    {
        cout << 5 << "/" << 6;
    }
    else
    {
        cout << 1 << "/" << 1;
    }
}