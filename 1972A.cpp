#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void solve()
{
    int n;
    cin >> n;
    vector<long long> problems;
    vector<long long> difficulty;
    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        problems.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        difficulty.push_back(temp);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {

        // cout<<i<<" "<<"pb:"<<problems[i]<<" diff:"<<difficulty[i]<<endl;
        if (problems[i] > difficulty[i])
        {
            count++;
            problems.pop_back();
            problems.insert(problems.begin(), difficulty[i]);
            sort(problems.begin(), problems.end());
            // for (auto &&element: problems)
            // {
            //     cout<<element<<" "<<i<<" ";
            // }
            // cout<<endl;
        }

        // sort(problems.begin(), problems.end());
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}