#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int need = n - 1;
        int x=need-k;
        if (x<=0)
        {
            cout<<1;
        }
        else{
            cout<<x+1;
        }
        
    }

    return 0;
}