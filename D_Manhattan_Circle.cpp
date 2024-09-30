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
        vector<int> occur(n, 0);
        vector<vector<char>> arr(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                cin >> arr[i][j];

                if (arr[i][j] == '#')
                {
                    occur[i] = occur[i] + 1;
                }
            }
        }
        auto maxAd = max_element(occur.begin(), occur.end());
        int maxValue = *maxAd;
        int maxIndex = distance(occur.begin(), maxAd);
        int startIndex = -1;
        int endIndex = -1;
        for (int i = 0; i < m; i++)
        {
            if (arr[maxIndex][i] == '#')
            {
                startIndex = i;
                while (arr[maxIndex][i] == '#' && i<m)
                {
                    i++;
                }
                endIndex = i;
            }
        }

        int col = startIndex + 1 + ((endIndex - (startIndex + 1)) / 2);

        cout << maxIndex + 1 << " " << col;
        cout << endl;
    }
}