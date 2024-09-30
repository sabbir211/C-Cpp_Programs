#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        int count = 0;
        bool x=false;
        vector<pair<int,int>> arr(n);
        for (int i = 0; i <n; i++)
        {
            int a, b;
            cin >> a >> b;
            arr[i].first=a;
            arr[i].second=b;

        }
        int i=0;
        int start=0;
        while (i<n)
        {
            if (arr[i].first-start>=s)
            {
                x=true;
                break;
            }
            else
            {
                start=arr[i].second;
            }
            i++; 
            
        }
        if (m-arr[n-1].second>=s)
        {
           x=true;
        }
        
        
       
        

        if(x){cout<<"YES"<<endl;}
        else {
            cout<<"NO"<<endl;}
    }
}