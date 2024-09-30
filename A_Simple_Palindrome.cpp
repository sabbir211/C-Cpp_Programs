#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = "aeiou";
        string result;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
           result.append(1,s[j]);
        //    cout<<j<<" ";
           j++;
            if (j ==5 )
            {
                j = 0;
            }
           
        }
     sort(result.begin(),result.end()) ;

        cout << result<< endl;
    }
}