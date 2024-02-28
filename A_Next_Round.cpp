#include <iostream>
using namespace std;

int main()
{
    int participants;
    int k;
    cin >> participants;
    cin >> k;
    int *arr = new int[participants];
    for (int i = 0; i < participants; i++)
    {
        cin >> arr[i];
    }
    int result = 0;
    for (int i = 0; i < participants; i++)
    {

        if (arr[i] > 0)
        {
            if (arr[i] >= arr[k - 1])
            {
                result++;
            }
        }
    }

    cout << result;

    delete[] arr;
}