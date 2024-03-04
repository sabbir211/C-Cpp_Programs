#include<iostream>
using namespace std;
int main(){
    int firstPrice,moneyWeHave,quantity;
int sum=0;
cin>>firstPrice>>moneyWeHave>>quantity;
for (int i = 1; i <= quantity; i++)
{
    sum=sum+firstPrice*i;
}
if (sum<moneyWeHave)
{
    cout<<0;
}
else{
cout<<sum-moneyWeHave;

}

    
    return 0;
}