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
        int it = 1;
        vector<int> a;
        if (n % 4 != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int i = 2;
            int evenSum = 0;
            while (it <= n / 2)
            {
                a.push_back(i);
                it++;
                evenSum += i;
                i += 2;
            }
            it = 1;
            i = 1;
            int OddSum = 0;
            while (it <= n / 2)
            {
                a.push_back(i);
                it++;
                OddSum += i;
                i += 2;
            }
            int x = a[n - 1];
            while (evenSum != OddSum)
            {
                int temp = a[n - 1];
                a[n - 1] += 2;
                x = a[n - 1];
                OddSum -= temp;
                OddSum += x;
            }

            for (auto &&i : a)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
