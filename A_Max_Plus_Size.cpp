#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxi = INT_MIN;
        int countEven = 0;
        for (int i = 0; i < n; i += 2)
        {
            maxi = max(maxi, a[i]);
            countEven++;
        }
        int countOdd = 0;
        int OddMaxi = INT_MIN;
        for (int i = 1; i < n; i += 2)
        {
            OddMaxi = max(OddMaxi, a[i]);
            countOdd++;
        }
        cout<<max(maxi+countEven,OddMaxi+countOdd)<<endl;
    }
}