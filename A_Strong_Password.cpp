#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool changed = false;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (s[i] != 'z')
                {
                    char c = s[i] + 1;
                    s = s.substr(0, i + 1) + c + s.substr(i + 1, s.length() - i);
                }
                else
                {
                    char c = s[i] - 1;
                    s = s.substr(0, i + 1) + c + s.substr(i + 1, s.length() - i);
                }

                changed = true;
                break;
            }
        }

        // cout<<"fg"+c<<endl;
        if (changed)
        {
            cout << s << endl;
        }
        else
        {
            if (s[s.length() - 1] != 'z')
            {
                char c = s[s.length() - 1] + 1;
                cout << s + c << endl;
            }
            else
            {
                char c = s[s.length() - 1] - 1;
                cout << s + c << endl;
            }
        }
    }
}