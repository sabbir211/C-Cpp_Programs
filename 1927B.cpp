#include <iostream>
using namespace std;
#include <map>
#include <vector>
void solve()
{
    vector<int> trace;
    map<char, int> m;
    string s = "abcdefghijklmnopqrstuvwxyz";
    
    int n;
    cin >> n;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        trace.push_back(temp);
    }
   for (int i = 0; i < n; i++)
   {
    for (auto element : m)
    {
        if (element.second==trace[i])
        {
           cout<<element.first;
           m[element.first]++;
           break;
        }
        
    }
    
   }
    cout<<endl;
   

}
int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
        solve();
    }
}