#include <iostream>
using namespace std;
#include <vector>
void solve(){
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        arr.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        int fact = 1;
        for (int j = 1; j < arr[i]; j++)
        {
            fact =fact*j;
        }
        cout<<fact<<" ";
        
    }
    cout<<endl;
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