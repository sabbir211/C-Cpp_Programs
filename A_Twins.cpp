#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> a(t);
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int n = sum / 2;
    int left=0;
    int count=0;
    for (int i = 0; i < t; i++)
    {
        if (left<=n)
        {
        left+=a[i];
           count++;
        }else{
            break;
        }
        
    }
    cout<<count<<endl;
    
}