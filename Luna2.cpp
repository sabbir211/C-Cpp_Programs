#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <algorithm>
int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    multimap<int, int> m2;
    map<int, int>::iterator it;
    multimap<int, int>::iterator it2;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        m[temp] = m[temp] + 1;
    }

    it = m.begin();
    while (it != m.end())
    {
        // cout<<"key:" <<it->first<<" value:"<<it->second<<endl;
        m2.insert(make_pair(it->second, it->first));
        it++;
    }
    it2 = m2.begin();
    while (it2 != m2.end())
    {
        cout << "value:" << it2->first << " key:" << it2->second << endl;
        it2++;
    }
}