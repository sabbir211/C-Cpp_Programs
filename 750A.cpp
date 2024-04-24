#include<iostream>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int timeHave=4*60;
timeHave-=k;
int i=1;
int count=0;
while (timeHave>=5*i)
{
    timeHave-=(5*i);
    i++;
    count++;

}
if (count<=n)
{
cout<<count<<endl;
    
}
if (count>n)
{
    cout<<n<<endl;
}

    
}