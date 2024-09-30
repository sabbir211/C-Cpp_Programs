#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = to_string(n);
        
        
        if (s.length() < 3) {
            cout << "NO" << endl;
            continue;
        }
        
        int x = stoi(s.substr(2, s.length() - 2));
        
        if (s.substr(0, 2) == "10" && x >= 2 && s[2] != '0') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}