#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>
#include <vector>


void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> arr;
    int minmum = INT_MAX;
    bool isPresent = true;
    for (int i = 0; i < n * n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
        minmum = min(arr[i], minmum);
    }
    vector<vector<int>> arr2(n, vector<int>(n));
    vector<int> resultedArray;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                arr2[i][j] = minmum;
            }

            else if (j == 0)
            {
                arr2[i][j] = arr2[i - 1][j] + c;
            }
            else
            {
                arr2[i][j] = arr2[i][j - 1] + d;
                // cout<<arr2[i][j]<<" ";
            };


            // bool found = false; 
            // for (int k = 0; k < arr.size(); k++) {
            //     if (arr[k] == arr2[i][j]) {
            //         arr.erase(arr.begin() + k);
            //         found = true;
            //         break;
            //     }
            // }
            // if (!found) { 
            //     isPresent = false;
                
            // }
            resultedArray.push_back(arr2[i][j]);
           
        }
        

    }
    sort(arr.begin(),arr.end());
    sort(resultedArray.begin(),resultedArray.end());
    for (int i = 0; i < n*n; i++)
    {
        if(arr[i]!=resultedArray[i]){
            // cout<<"NO"<<endl;
            isPresent=false;
            break;
        }
       
    }
    
        if (isPresent)
        {
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
        
        arr.clear();
        arr2.clear();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}