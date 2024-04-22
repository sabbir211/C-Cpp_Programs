#include <iostream>
using namespace std;
#include <vector>
void solve()
{
    int k, q;
    cin >> k >> q;

    vector<int> a;
    vector<int> n;
    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        n.push_back(temp);
    }
    for (int i = 0; i < q; i++)
    {
        if (n[i] < a[0])
        {
            cout << n[i];
        }
        if (n[i] >= a[0])
        {
            cout << a[0] - 1;
        }
        cout << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}