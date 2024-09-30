#include <iostream>
#include<cstring>
using namespace std;
int solve(int arr[], int i, int n,int dp[])
{
    if (i >= n)
    {
        return 0;
    }
    if (dp[i]!=-1)
    {
        return dp[i];
    }
    
    int taken = arr[i] + solve(arr, i + 2, n,dp);
    int skip = solve(arr, i + 1, n,dp);
    return dp[i]=max(taken, skip);
}
int main()
{
    int dp[102];
    memset(dp,-1,sizeof(dp));
    int arr[] = {183, 219, 57, 193, 94, 233, 202, 154, 65, 240, 97, 234, 100, 249, 186, 66, 90, 238, 168, 128, 177, 235, 50, 81, 185, 165, 217, 207, 88, 80, 112, 78, 135, 62, 228, 247, 211};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = solve(arr, 0, n,dp);
    cout << result;
}