#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());

    if (reversed_s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
