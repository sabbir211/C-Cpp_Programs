#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int singleDigit = x % 10;
        int result = (singleDigit-1) * 10;
        int digitCount = 0;
        while (x)
        {
            digitCount++;
            x /= 10;
        }
        if (digitCount == 4)
        {
            result += 10;
        }
        else if (digitCount == 3)
        {
            result += 6;
        }
        else if (digitCount == 2)
        {
            result += 3;
        }
        else
        {
            result += 1;
        }
        cout<<result<<endl;
    }
}