#include <iostream>
using namespace std;
#include<algorithm>
#include <vector>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        // cout<<temp<<" ";
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
        }
        int temp=abs(a[0]-a[1]);
        if (a.size()==2 && temp>1)
        {
            cout<<"YES"<<endl;


        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
