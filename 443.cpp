#include<iostream>
using namespace std;
#include<set>
#include<string>
int main(){
    string s;
  getline(cin,s);
 set<char>distinct;
    for (int i = 1; i < s.size()-1; i++)
    {
        // if (i%2==0)
        // {
        //     // cout<<s[i];
        // }
       if (s[i]>=97 && s[i]<=122)
       {
        distinct.insert(s[i]);
       }
       
        
    }
    cout<<distinct.size();
    distinct.clear();
}