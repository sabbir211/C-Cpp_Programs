#include <iostream>
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
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                a++;
            }
            if (s[i] == 'B')
            {
                b++;
            }
            if (s[i] == 'C')
            {
                c++;
            }
            if (s[i] == 'D')
            {
                d++;
            }
        }
        int result = 0;
        if (a >= n)
        {
            result += n;
        }
        else
        {
            result += a;
        }

        if (b >= n)
        {
            result += n;
        }
        else
        {
            result += b;
        }
        if (c >= n)
        {
            result += n;
        }
        else
        {
            result += c;
        }
        if (d >= n)
        {
            result += n;
        }
        else
        {
            result += d;
        }
        cout << result << endl;
    }
}