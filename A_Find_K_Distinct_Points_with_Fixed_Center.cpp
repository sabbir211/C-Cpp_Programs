#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc, yc, k;
        cin >> xc>> yc>> k;

        int a = 1, b = 1;
        if ((k - 1) % 2 == 0)
        {
            for (int i = 0; i < k - 1; i++)
            {
                cout << a * b << " " << a * b << endl;
                if (i % 2 != 0)
                {
                    a++;
                }

                b = b * -1;
            }
            cout << xc * k << " " << yc * k << endl;
        }
        else
        {
            cout << 10001 << " " << 10001 << endl;
            for (int i = 0; i < k - 2; i++)
            {
                cout << a * b << " " << a * b << endl;
                if (i % 2 != 0)
                {
                    a++;
                }
                b = b * -1;
            }
            cout << xc * k-10001 << " " << yc * k-10001 << endl;
        }
    }
}