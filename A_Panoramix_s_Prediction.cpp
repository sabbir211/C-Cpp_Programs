#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool found = false;
    int x = 0;
    if (n == 2)
    {
        n += 1;
    }
    else
    {
        n += 2;
    }


    while (n <= m)
    {
        bool isPrime = true;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
            isPrime = true;
        }
        if (isPrime)
        {
            found = true;
            x = n;
            break;
        }
        n += 2;
    }
    if (found && x == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}