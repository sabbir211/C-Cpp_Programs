#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

int coinChange(int i, int amount, vector<int> &coins, vector<vector<int>> &dp)
{
    if (i >= coins.size())
    {
        return 0;
    }
    if (amount == 0)
    {
        return 1;
    }
    if (dp[i][amount] != -1)
    {
        return dp[i][amount];
    }
    int x = coinChange(i + 1, amount, coins, dp);
    int p = 0;
    if (amount >= coins[i])
    {
        p = coinChange(i, amount - coins[i], coins, dp);
    }
    return dp[i][amount] = p + x;
}


int main()
{
    int amount;
    cout << "enter amount:";

    cin >> amount;
    vector<int> coins;
    int n;
    cout << "Enter the number of Coins array:";
    cin >> n;
    cout << "now enter coins:";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        coins.push_back(temp);
    }

    sort(coins.begin(), coins.end());

    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));

    int result = coinChange(0, amount, coins, dp);
    cout << result << endl;
    return 0;
}