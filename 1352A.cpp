#include <iostream>
using namespace std;
#include <string>
#include<vector>
void solve()
{
    int n;
    cin >> n;
vector<int>arr;
    int power = 1;
    while (n > 0)
    {
        if (n % 10 > 0)
        {
            int temp = (n % 10) * power;
            arr.push_back(temp);
        }
        n /= 10;
        power *= 10;
    }
    cout<<arr.size()<<endl;
    for (auto ele:arr)
    {
      cout<<ele<<" ";
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
