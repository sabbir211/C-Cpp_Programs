#include <iostream>
#include <map>
using namespace std;
void solve(){
     int n, k;
    cin >> n >> k;
    map<int, int> m;
    bool have=false;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        m[temp] = m[temp] + 1;
    }
    map<int,int> :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        if (it->second>=k)
        {
           have=true;
           break;
        }
        
        
    }
    if (have)
    {
        cout<<k-1<<endl;  
    }
    else{
        cout<<n<<endl;
    }
    
}
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
    solve();
   }
   
    
}