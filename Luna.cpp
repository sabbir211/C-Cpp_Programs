#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <map>

int main()
{
    int n;
    cin >> n;
    vector<int> key;
    vector<int> value(n, 0);
    set<int> uEle;
    set<int>::iterator uit;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        key.push_back(temp);
        uEle.insert(temp);
    }
    sort(key.begin(), key.end());
    int j = 0;
    for (int i = 1; i < n; i++)
    {
      
        if (key[i] == key[i - 1])
        {
            value[j]++;
        }
        else
        {
            value.push_back(1);
            j++;
            
        }
    }
    uit = uEle.begin();
    map<int, int> last;
    int i = 0;
    while (i<uEle.size())
    {
        last.insert({value[i], *uit});
        
        uit++;
        i++;
    }
    map<int, int>::iterator it;
     for (it = last.begin(); it != last.end(); it++)
     {
        cout<<"KEY :"<<(*it).first<<"Value"<<(*it).second<<endl;
     }
    cout << value.size() << uEle.size();

    return 0;
}