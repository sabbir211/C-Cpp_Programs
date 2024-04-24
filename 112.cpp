#include <iostream>
using namespace std;
#include <string>

int main()
{
    string x, y;
    cin >> x >> y;

    for (int i = 0; i < x.length(); i++)
    {
        int temp1=tolower(x[i]);
        int temp2=tolower(y[i]);
        if (i == x.length() - 1 && tolower(x[i]) == tolower(y[i]))
        {
            cout << 0 << endl;
        }
        else if (temp1>temp2)
        {
            cout << 1 << endl;
            break;
        }
        else if (temp1<temp2)
        {
            cout << -1 << endl;
            break;
        }
    }
}