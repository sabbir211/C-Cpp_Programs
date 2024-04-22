#include<iostream>
using namespace std;

void solve(){
int n;
cin>>n;
double sum=0;
for (int i = 0; i < n; i++)
{
    double x;
    cin>>x;
    sum+=(x/100);
// cout<<sum<<" ";
    
}
double result=(sum*100)/n;
cout<<result<<endl;
}
int main(){
    solve();
}