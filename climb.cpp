#include <iostream>
#include <cstring>
using namespace std;
int dp[26];
int solve(int n, int i, int dp[])
{
    if (i == n)
    {
        return 1;
    }

    if (dp[i] != -1)
    {
        return dp[i];
    }

    int single_step = solve(n, i + 1, dp);

    int two_step = solve(n, i + 2, dp);
    return dp[i] = (single_step + two_step);
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n = 4;
    int result = solve(n, 0, dp);
    cout << result;
}