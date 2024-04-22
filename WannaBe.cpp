#include <iostream>
using namespace std;
#include <set>

int main()
{
    int n, p1, p2;
    cin >> n >> p1;
    set<int> pass;
    while (p1--)
    {
        int z;
        cin >> z;
        pass.insert(z);
    }
    cin>>p2;
    while (p2--)
    {
        int z;
        cin >> z;
        pass.insert(z);
    }
    if (pass.size() < n)
    {
        cout << "Oh, my keyboard!" << endl;
    }
    else
    {
        cout << "I become the guy." << endl;
    }
}