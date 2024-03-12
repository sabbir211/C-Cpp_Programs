#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string x;
    cin>>x;
    string y;
    cin>>y;
    string reversed=x;
   reverse(reversed.begin(),reversed.end());
    if (reversed==y)
    {
       cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}