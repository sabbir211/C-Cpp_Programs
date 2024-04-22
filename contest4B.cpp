#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void solve()
{
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    int result=0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
           result++;
        }
        
    }
    cout<<result<<endl;
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