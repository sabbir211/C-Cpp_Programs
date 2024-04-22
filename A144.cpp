#include <iostream>
using namespace std;
#include <vector>
#include <climits>
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int max = INT_MIN;
    int maxIndx;
    int min = INT_MAX;
    int minIndx;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
        if (temp > max)
        {
            max = temp;
            maxIndx = i + 1;
        }
        if (temp <= min)
        {
            minIndx = i + 1;
            min = temp;
        }
    }
    // cout << "MIN=" << minIndx << ' ' << "max=" << ' ' << maxIndx << endl;
int result;
    if (minIndx < maxIndx)
    {
        result = (n - minIndx - 1) + maxIndx - 1;
    }
    else
    {

        result = (n - minIndx - 1) + maxIndx;
    }

    cout << result << endl;
}
