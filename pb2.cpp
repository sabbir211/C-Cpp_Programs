#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        int fact = 1;
        for (int i = 1; i < temp; i++)
        {
            fact *= i;
        }
        arr.push_back(fact);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
}