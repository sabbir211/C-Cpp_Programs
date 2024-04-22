#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int stayed = 0;
    int capacity = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        stayed += (b - a);
        capacity=max(stayed, capacity);
    }
    cout << capacity << endl;
}