#include <iostream>
using namespace std;
#include <string>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    set<char> s;
    string z;
    getline(cin, z);
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            s.insert(z[i]);
        }
        for (int i = 0; i < 26; i++)
        {
            char upper = 65 + i;
            char lower = 97 + i;
            if (s.count(upper) || s.count(lower))
            {
                //    cout<<s.count(upper)<<s.count(lower)<<" ";
                continue;
            }

            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
}