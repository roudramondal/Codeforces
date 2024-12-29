#include <iostream>
using namespace std;
bool isDisliked(int num) {
    return (num % 3 == 0 || num % 10 == 3);
}

int main() {
    int t;
    cin >> t; 
    int k_values[100];
    int max_k = 0;

    for (int i = 0; i < t; ++i) {
        cin >> k_values[i];
        if (k_values[i] > max_k) {
            max_k = k_values[i]; 
        }
    }

    int likedNumbers[1000]; 
    int count = 0, current = 1;

    
    while (count < max_k) {
        if (!isDisliked(current)) {
            likedNumbers[count++] = current;
        }
        ++current;
    }

    for (int i = 0; i < t; ++i) {
        cout << likedNumbers[k_values[i] - 1] << endl;
    }

    return 0;
}
