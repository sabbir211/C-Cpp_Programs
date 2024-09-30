#include <bits/stdc++.h>
using namespace std;

int main()
{

    
        int n;
        cin >> n;
        vector<int> a(n);
        int maxEle=INT_MIN;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxEle=max(maxEle,a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            count+=maxEle-a[i];
        }
        cout<<count<<endl;

    
}