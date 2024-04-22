#include <iostream>
using namespace std;

void tent()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b==1 && c%3+b<3)
    {
        cout<<-1<<endl;
        return ;
    }
    

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tent();
    }
    return 0;
}
