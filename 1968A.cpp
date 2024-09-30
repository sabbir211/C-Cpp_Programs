#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        bool found = false;
        for (int i = x - 1; i > 0; i--)
        {
            if (i % 3 == 0 && x % 3 == 0)
            {
                cout << i << endl;
                found = true;
                break;
            }
            else if (i % 2 == 0 && x % 2 == 0)
            {
                cout << i << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << x - 1 << endl;
        }
    }
}