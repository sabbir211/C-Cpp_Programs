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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        if (arr[0]==arr[n-1])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            string s(n,'R');
            s[1]='B';
            cout<<s<<endl;
        }
        
        
    }
}