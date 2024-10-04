#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mishka = 0;
    int chris = 0;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            mishka++;
        }
        else if(b>a)
            chris++;
    }
    if (mishka > chris)
        cout << "Mishka" << endl;
    else if (mishka == chris)
        cout << "Friendship is magic!^^" << endl;
    else
        cout << "Chris" << endl;
}
