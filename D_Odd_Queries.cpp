#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        vector<vector<int>> query(q, vector<int>(3));
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> query[i][0] >> query[i][1] >> query[i][2];
        }

     
        vector<int> sumsArr(n, 0);
        sumsArr[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            sumsArr[i] = sumsArr[i-1] + arr[i];
        }

        for (int i = 0; i < q; i++)
        {
            int start = query[i][0];
            int end = query[i][1];
            int value = query[i][2];

            int totalSum = sumsArr[n-1];

            int exceptRangeSum = sumsArr[end-1];
            if (start > 1) 
            {
                exceptRangeSum -= sumsArr[start-2];
            }

           
            int sum = totalSum - exceptRangeSum + (end - start + 1) * value;

           
            if (sum % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
