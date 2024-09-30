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
        stack<int> arr;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                char temp;
                cin >> temp;
                    // cout<<'temp';
                if (temp == '#')
                {
                    arr.push(j+1);
                }
            }
        }
        while (!arr.empty())
        {
            cout << arr.top() << " ";
            arr.pop();
        }

        cout << endl;
    }
}