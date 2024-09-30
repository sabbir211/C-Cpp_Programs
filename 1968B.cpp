#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while (t--)
{
        int n, m;
    cin >> n >> m;
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int count = 0;
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
    int hey=false;
        int j;
        if (prev==-1)
        {
            j=0;
        }
        else{
            j=prev+1;
        }
        while (j<m)
        {
            if (s1[i] == s2[j])
            {
                count++;
                prev = j;
                hey=true;
                break;
            }
            else{
                j++;
            }
        }

        if (hey==false)
        {
           break;
        }
    
        
    }
    cout<<count<<endl;
}

}