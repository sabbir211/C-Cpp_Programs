#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int robin = 0;
        vector<int> a(n);
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= k)
            {
                robin += a[i];
            }
            if (a[i] == 0 && robin > 0)
            {
                result++;
                robin--;
            }
        }
        cout << result << endl;
    }
}