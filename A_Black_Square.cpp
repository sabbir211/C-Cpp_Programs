#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i] - '0';
        count+=a[x-1];
    }
    cout<<count<<endl;
}
