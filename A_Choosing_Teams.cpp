#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  n,k;
    cin>>n>>k;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        if (k+t<=5)
        {
            count++;
        }
        
    }
    cout<<count/3<<endl;
    
}