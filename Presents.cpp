#include <iostream>
using namespace std;
#include <vector>

void solve()
{
    int n;
    vector<int> arr;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                cout << j+1 << " ";
            }
        }
    }
}
int main()
{
    solve();
    return 0;
}