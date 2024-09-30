#include <iostream>
using namespace std;
#include <vector>

void solve()
{

    int n;
    cin >> n;
    vector<int> arr;
    bool two = false;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        int indx = arr[i];
        if (arr[indx-1] == i+1)
        {
            two = true;
            break;
        }
        else
        {
            two = false;
        }
    }
    if (two)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}