#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr;
        int a;
        cin >> a;

        for (int i = 0; i < a; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }

        for (int i = 0; i < a; i++)
        {
            bool u = true; // Reset u for each test case
            for (int j =0; j < a; j++)
            {
                if (arr[i] == arr[j] && i!=j)
                {
                    u = false;
                    break; // No need to continue checking if duplicate found
                }
            }

            if (u)
            {
                cout << i+1 << endl; // Print the unique element
                break; // No need to continue checking if unique element found
            }
        }
    }

    return 0;
}
