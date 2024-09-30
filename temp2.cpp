#include <iostream>
using namespace std;
#include <climits>
#include <algorithm>
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l;
    cin >> c >> d >> p;
    cin >> nl >> np;
    int have = k * l;
    int possibleToast = have / nl;
    int totalSliceOfLime = c * d;
    int saltHaveForToast = p / np;

    // int result = min(possibleToast, totalSliceOfLime, saltHaveForToast) / n;

    if (possibleToast <= totalSliceOfLime && possibleToast <= saltHaveForToast)
    {
        cout << possibleToast/n;
    }
    else if (possibleToast >= totalSliceOfLime && totalSliceOfLime <= saltHaveForToast)
    {
        cout << totalSliceOfLime/n;
    }
    else
    {
        cout << saltHaveForToast/n;
    }
    return 0;
}