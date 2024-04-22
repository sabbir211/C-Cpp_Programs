#include <iostream>
#include <climits>
using namespace std;
#include <vector>
vector<int> exclude;
void constains()
{
    int n;
    cin >> n;
    int high = INT_MAX;
    int low = INT_MIN;
    int result = 0;
    while (n--)
    {
        int a, x;
        cin >> a >> x;

        switch (a)
        {
        case 2:

            high = min(high, x);

            break;
        case 1:

            low = max(low, x);

            break;
        case 3:
            exclude.push_back(x);
            break;
        }
    }
    result = high - low;

    for (auto element : exclude)
    {
        if (low <= element && element <= high)
        {

            result--;
        }
        // cout<<"low="<<low<<" high="<<high<<" ";
    }

    if (result < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << result + 1 << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        constains();
    }

    return 0;
}