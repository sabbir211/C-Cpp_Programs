#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    char pre=' ';
   int count=1;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if (s[0]==pre)
        {
            count++;
        }

        pre=s[1];
        
    }
    cout<<count<<endl;
}





