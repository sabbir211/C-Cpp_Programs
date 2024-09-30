#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            mini = min(temp, mini);
            maxi = max(maxi, temp);
        }
        cout << maxi - mini << endl;
    }
}