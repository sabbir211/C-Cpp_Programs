#include<iostream>
using namespace std;
#include<vector>

#include<algorithm>

int main(){
vector<int>arr;
arr.resize(3);
for (int i = 0; i < 3; i++)
{
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
int result =(arr[1]-arr[0])+(arr[2]-arr[1]);
cout<<result<<endl;
    
    
}