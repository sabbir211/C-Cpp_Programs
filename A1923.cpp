#include<iostream>
using namespace std;
#include<vector>
void solve()
{

    int n;cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    int l=1,r=n;
    while(v[l]==0)l++;
    while(v[r]==0)r--;
    int ans=0;
    for(int i=l;i<=r;i++)ans+=v[i]==0;
    cout<<ans<<endl;
}

int main()
{


   int t;
   cin>>t;
    while(t--)
    {

        solve();
    }

}
