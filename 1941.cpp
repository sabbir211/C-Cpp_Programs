#include <iostream>
using namespace std;
#include <string>
void solve(){
int n;
    cin >> n;
    string s;
    cin >> s;
 
    int count=0;
    for (int i = 0; i < s.length()-2; i++)
    {
        if (s.length()<3)
        {
            break;
        }
        
        if ((s[i]=='m'&& s[i+1]=='a'&& s[i+2]=='p' ) || s[i]=='p'&& s[i+1]=='i'&& s[i+2]=='e')
        { 
           count++;
           i=i+2;
        }
        
    }
    cout<<count<<endl;
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