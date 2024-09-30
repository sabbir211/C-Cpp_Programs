#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> result;
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    if (result.size() == 0)
    {
        int j = 0;
        int k = arr[0] + 1;
        while (j % k != arr[0])
        {
            j++;
        }
        if (j % k == arr[0])
        {
            cout << j;
            result.push_back(k);
            result.push_back(j);
        }
    }
    for (int i = 2; i < n-2; i++)
    {
        int j=0;
        while (result[i-1]%j!=arr[i-1])
        {
            j++;
        }
        if (result[i-1]%j==arr[i-1])
        {
            result.push_back(j);
        }
        
        
    }
    for (auto &&i : result)
    {
        cout<<i<<" ";
    }
    
}