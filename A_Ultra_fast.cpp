#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    // string s1=to_string(x);
    // string s2=to_string(y);
    for (int i = 0; i < s1.size(); i++)
    {
            // cout<<s2[i];
        if (s1[i]!=s2[i])
        {
            cout<<1;
        }
        else{
            cout<<0;
        }
        
    }
    
}