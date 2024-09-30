#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));
        vector<int> holdRow(m);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        if (m < 2 && n < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            int row = n - 1;
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    int hold = a[i][0];
                    for (int j = 0; j < m; j++)
                    {
                        if (j == m - 1)
                        {
                            holdRow[j] = hold;
                        }
                        else
                        {
                            holdRow[j] = a[i][j + 1];
                        }
                    }
                }
                else
                {
                    int hold = a[i][0];
                    for (int j = 0; j < m; j++)
                    {
                        if (j == m - 1)
                        {
                            b[i-1][j] = hold;
                        }
                        else
                        {
                            b[i-1][j] = a[i][j + 1];
                        }
                    }
                }

                row--;
            }
            for (int i = 0; i < m; i++)
            {
                b[n-1][i]=holdRow[i];
            }
            
            for (auto &&i : b)
            {
                for (auto &&j : i)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            // for (auto &&i : holdRow)
            // {
            //     cout<<i<<" ";
            // }
            // cout<<"test "<<t<<endl;
            
        }
    }
}