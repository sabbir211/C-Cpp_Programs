#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (n<k || k==1)
        {
            cout<<n<<endl;
            continue;
        }

        long long count = 0;
        while (n > 0)
        {
            count = count + (n % k);
            n = n / k;
        }
        cout << count << endl;
    }
}