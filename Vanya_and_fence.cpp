#include<iostream>
using namespace std;

int main(){

int n,h;
cin>>n>>h;
int element;
int count=0;
for (int i = 0; i < n; i++)
{
    cin>>element;
    if (element>h)
    {
        count+=2;
    }
    else{
        count++;
    }

    
}
cout<<count;



    return 0;
}