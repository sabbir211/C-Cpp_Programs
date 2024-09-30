#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count = 0;
        bool alice = false;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        // for (int i = 0; i < n; i++)
        // {
        //     if (i==0 || arr[i]==arr[i-1])
        //     {
        //       count++;
        //     }
        //     else
        //     {
        //        break;
        //     }
        // }
        // if (alice)
        // {
        //    cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        if (arr[0] != arr[1])
        {
            cout << "YES" << endl; // If the largest element is unique, Alice wins
        }
        else
        {
            cout << "NO" << endl; // If not, the outcome depends on the further game process
        }
    }
}