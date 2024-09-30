
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> inp(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            inp[i][j] = temp;
        }
    }
    map<int, vector<int>> adj;
    for (int i = 0; i < n; i++)
    {
        adj[i+1].push_back(-1);
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (inp[i][j] == 1)
            {
                adj[i+1].push_back(j+1);
            }
        }
    }
    for (auto &&i : adj)
    {
        // cout << i.first << ":";
        int j=0;
        while (j < i.second.size())
        {
            // cout<< i.second[j]<< " ";
            adj.erase(i.second[j]);
            j++;
        }
        // cout<<endl;
    }
    // cout<<adj.size();
    cout<<inp.size();
}