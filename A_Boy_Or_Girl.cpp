#include <iostream>
#include <string>

using namespace std;

int main() {
    string x;
    cin >> x;

    int distinctCharLen = 0;
    bool charExists[26] = {false}; 

    for (char c : x) {
        int index = c - 'a'; 
        if (!charExists[index]) {
            distinctCharLen++;
            charExists[index] = true;
        }
    }

    if (distinctCharLen % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}
