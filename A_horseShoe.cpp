#include <iostream>
using namespace std;
#include<algorithm>
int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
int arr[]={a,b,c,d};
  int need = 0;
  sort(arr, arr+4);
  for (int i = 0; i < 3; i++)
  {
    if (arr[i]==arr[i+1])
    {
      need++;
    }
     
  }
   
  cout<< need<<endl;
  }