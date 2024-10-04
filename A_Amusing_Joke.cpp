#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    bool ok = true;
    for (int i = 0; i < a.length(); i++)
    {
        auto found = c.find(a[i]);
        if (found != string::npos)
        {
            c.erase(found, 1);
        }
        else
        {
            ok = false;
            break;
        }
    }

    for (int i = 0; i < b.length(); i++)
    {
        auto found = c.find(b[i]);
        if (found != string::npos)
        {
            c.erase(found, 1);
        }
        else
        {
            ok = false;
            break;
        }
    }
    // cout << c.length() << ok << endl;
    if (ok && c.length() == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
