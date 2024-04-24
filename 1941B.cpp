#include <iostream>
using namespace std;
#include <vector>

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    for (int i = 1; i < n-1; i++)
    {
        if (arr[i-1]>arr[i+1]|| 2*arr[i]<arr[i-1])
        {
            cout<<"NO"<<endl;
            return;
        }

        arr[i-1]=0;
        arr[i]-=2*arr[i];
        arr[i+1]-=1;
        
    }
    cout<<"YES"<<endl;
    
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