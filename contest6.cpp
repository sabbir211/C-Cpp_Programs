#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <climits>
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    // memset(arr2,-1,sizeof(arr2));

    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
        if (temp > mx)
        {
            mx = temp;
        }
    }
    if (n < 3)
    {
        cout << 0 << endl;
        return;
    }
    vector<int> arr2(mx+1, 0);
    for (int i = 0; i < n; i++)
    {
        
        arr2[arr[i]]=arr2[arr[i]]+1;
    
    }
    int z = mx;
    int count = 0;
    for (int i = 0; i <= z; i++)
    {
        // cout << arr2[i];
        if (arr2[i] >= 3)
        {
            count+=arr2[i]/3;
        }
    }

    cout << count << endl;
    arr.clear();
    arr2.clear();
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}
