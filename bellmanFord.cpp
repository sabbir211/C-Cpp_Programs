#include <iostream>
using namespace std;
#include <vector>

vector<int> bellman_ford(int V, vector<vector<int>> &edges, int S)
{

    // Code here
    vector<int> dist(V, 1e8);
    dist[S] = 0;

    for (int i = 0; i < V - 1; i++)
    {

        for (auto ele : edges)
        {
            int u = ele[0];
            int v = ele[1];
            int w = ele[2];
            if (dist[u] != 1e8 && (dist[u] + w) < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    int flag = 0;
    for (auto ele : edges)
    {
        int u = ele[0];
        int v = ele[1];
        int w = ele[2];
        if (dist[u] != 1e8 && (dist[u] + w) < dist[v])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        return {-1};
    }
    else
    {
        return dist;
    }
}

int main()
{
    int m, n = 3;
    cout << "Enter Edges count:";
    cin >> m;
    vector<vector<int>> inputs;
    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        inputs.push_back(temp);
    }

    vector<int> result = bellman_ford(m, inputs, 2);
    for (auto &&i : result)
    {
        if (i!=1e8)
        {
           cout<<i<<" ";
        }
        
    }
    
}