#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include<string>
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    bool alice=true;
    while (s.length()>0)
    {
        if (s.length()==2|| s.length()==1)
        {
            s.erase(0,1);
        }
        
        
        if (s[i] == 'U')
        {
            s.erase(i,i+1);
            if (i == 0)
            {
                if (s[i] == 'U')
                {
                    s[i] = 'D';
                }
                else
                {
                    s[i] = 'U';
                }
                if (s[n - 1] == 'U')
                {
                    s[n - 1] = 'D';
                }
                else
                {
                    s[n - 1] = 'U';
                }
            }
            else
            {
                if (s[i] == 'U')
                {
                    s[i] = 'D';
                }
                else
                {
                    s[i] = 'U';
                }
                if (s[i - 1] == 'U')
                {
                    s[i - 1] = 'D';
                }
                else
                {
                    s[i - 1] = 'U';
                }
            }

        };
    
    alice=!alice;
    }
    if (alice)
    {
        cout<<"YES"<<endl;
    }
   else
    {
        cout<<"NO"<<endl;
    }
    
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