#include <iostream>
#include <string>
using namespace std;
string LCS(string X, string Y, int m, int n, string memo[][100]) {
    if (m == 0 || n == 0)
        return "";

    if (memo[m][n] != "")
        return memo[m][n];

    if (X[m - 1] == Y[n - 1])
        return memo[m][n] = LCS(X, Y, m - 1, n - 1, memo) + X[m - 1];

    string lcs1 = LCS(X, Y, m - 1, n, memo);
    string lcs2 = LCS(X, Y, m, n - 1, memo);
    if (lcs1.length() > lcs2.length())
        return memo[m][n] = lcs1;
    else
        return memo[m][n] = lcs2;
}
int main() {
    string X = "bubble";
    string Y = "double";
    string memo[100][100];
   string lcs=LCS(X, Y, X.length(), Y.length(), memo);
    cout << lcs << endl;
    return 0;
}
