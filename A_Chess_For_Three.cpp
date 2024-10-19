#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<int> q;
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            int te;
            cin >> te;
            if (te > 0)
                q.push(te);
            sum += te;
        }

        if (sum % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        int counter = 0;
        while (q.size() >= 2)
        {
            int maxi = q.top();
            q.pop();
            int secondMaxi = q.top();
            q.pop();
            maxi--;
            secondMaxi--;
            counter++;
            if (maxi > 0)
                q.push(maxi);
            if (secondMaxi > 0)
                q.push(secondMaxi);
        }
        cout << counter << endl;
    }
}