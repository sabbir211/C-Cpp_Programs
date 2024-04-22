#include <iostream>
using namespace std;
#include<math.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int arr[4][2];
        int max =0;
        int min =0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                
                cin >> arr[i][j];

                if (i==0|| arr[i][0] > max)
                {
                    max = arr[i][0];
                }
                if (i==0 || arr[i][0] < min)
                {
                    min = arr[i][0];
                }
            }
        }
        // cout<<max;
        // cout<<arr[0][0];
        int result=pow(max-min,2);
        cout<<result<<endl;
    }
}