#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j = n - 1;
    int k = 0;
    int s = 0;
    int d = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i=1;
    while (k<=j)
    {
        if (i % 2 != 0)
        {
            if (arr[k] > arr[j])
            {
                s += arr[k];
                k++;
            }
            else
            {
                s += arr[j];
                j--;
            }
        }
        else
        {
            if (arr[k] > arr[j])
            {
                d += arr[k];
                k++;
            }
            else
            {
                d += arr[j];
                j--;
            }
        }
        i++;

        // else if(k == j)
        // {
        //     if (  i % 2 == 0)
        //     {
        //         s += arr[j];
        //     }
        //    else if (i % 2 != 0)
        //     {
        //         d += arr[j];
        //     }
        // }
    }
    cout<<s<<" "<<d<<endl;
}