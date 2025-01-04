#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  
    char s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
   
    bool alpha[26] = {false};

    for (int i = 0; i < n; i++) {
        char ch = s[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }

        if (ch >= 'a' && ch <= 'z') {
            alpha[ch - 'a'] = true;
        }
    }
    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!alpha[i]) {
            isPangram = false;
            break;
        }
    }

    if (isPangram) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
