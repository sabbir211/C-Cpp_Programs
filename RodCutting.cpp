
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int rodCutting(vector<int>& prices, int n) {

    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        int max_val = -1;
        for (int j = 0; j < i; ++j) {
            max_val = max(max_val, prices[j] + dp[i - j - 1]);
        }
        dp[i] = max_val;
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the length of the rod: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter the prices for each length from 1 to " << n << ": ";
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    int maxRevenue = rodCutting(prices, n);
    cout << "Maximum revenue: " << maxRevenue << endl;

    return 0;
}
