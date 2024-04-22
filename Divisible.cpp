#include <iostream>
using namespace std;


void solve()
{
    int a, b;
    cin >> a >> b;
    
    int move=0;
   if (a%b==0)
   {
        cout<<0<<endl;
        return;
   }
   else{
    move=b-a%b;
   }
   
    cout<<move<<endl;
    
    
   
    
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