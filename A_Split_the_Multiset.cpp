#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;

        int count=0;
        while (n>1)
        {
            n=n-(k-1);
            count++;
        }
        cout<<count<<endl;
    }
    
}