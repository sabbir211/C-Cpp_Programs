#include <iostream>
using namespace std;
#include <vector>

int LCS(string s1, string s2,vector<vector<int>>dp)
{
    int m = s1.length();
    int n = s2.length();
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
           
               if(s1[i] == s2[j]) {
                if(i==0 && j==0){
                    dp[i][j] = 1;
                }
                else{
                    dp[i][j] =  dp[i - 1][j - 1] + 1;
                }
            } else {
                if(i==0 && j==0){
                    dp[i][j] = 0;
                }
                else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
    }
    return dp[m-1][n-1];
}
int main()
{
    string s1 = "abcde";
    string s2 = "ace";
    int m = s1.length();
    int n = s2.length();
    vector<vector<int>>dp(m,vector<int>(n,0));
    int r = LCS(s1, s2,dp);
    cout << r << endl;
}