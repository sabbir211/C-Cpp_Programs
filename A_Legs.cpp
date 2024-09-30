#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        if (n >= 4)
        {
            count += n / 4;
            n = n-4*(n/4);
        }
        // cout << n << " " << t << endl;
        if (n == 2)
        {
            count++;
        }
        cout << count << endl;
    }
}