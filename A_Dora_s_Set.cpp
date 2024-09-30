#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            s.insert(i);
        }
        int count = 0;
        while (s.size() >= 3)
        {
            int a = *s.begin();
            s.erase(s.begin());
            int b = *s.begin();
            s.erase(s.begin());
            int c = *s.begin();
            s.erase(s.begin());

            if (__gcd(a, b) == 1 && __gcd(b, c) == 1 && __gcd(a, c) == 1)
            {
                count++;
            }
            else
            {
                s.insert(b);
                s.insert(c);
            }
        }
        cout<<count<<endl;
    }
}