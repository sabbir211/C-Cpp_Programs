#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<int, int> a;
    vector<int> values;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            auto it = a.find(temp);
            if (it != a.end())
            {
                it->second += 1;
            }
            else
            {
                a.insert({temp, 1});
            }
        }

        for (auto &&key : a)
        {
            values.push_back(key.second);
        }

        cout << n - *max_element(values.begin(), values.end()) << endl;

        a.clear();
        values.clear();
    }
}