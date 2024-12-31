#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;

    int total_slices = c * d;

    int toasts_with_drink = total_drink / nl;
    int toasts_with_lime = total_slices;
    int toasts_with_salt = p / np;

    
    int total_toasts = toasts_with_drink;
    if (toasts_with_lime < total_toasts)
        total_toasts = toasts_with_lime;
    if (toasts_with_salt < total_toasts)
        total_toasts = toasts_with_salt;

    int toasts_per_friend = total_toasts / n;

    cout << toasts_per_friend << endl;

    return 0;
}