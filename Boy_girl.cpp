#include <bits/stdc++.h>
using namespace std;

int main() {
    string username;
    cin >> username;

    bool charPresent[26] = {false};
    int distinctCount = 0;

    
    for (int i = 0; i < username.length(); i++) {
        int index = username[i] - 'a'; 
        if (!charPresent[index]) {    
            charPresent[index] = true;
            distinctCount++;
        }
    }

    
    if (distinctCount % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
