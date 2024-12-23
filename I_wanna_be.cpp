#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool canPass[101] = {false};  
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        canPass[level] = true; 
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        canPass[level] = true; 
    }
    bool allPassed = true;
    for (int i = 1; i <= n; i++) {
        if (!canPass[i]) {
            allPassed = false;
            break;
        }
    }

    if (allPassed) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
