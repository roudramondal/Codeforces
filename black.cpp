#include <iostream>
#include <string>
using namespace std;

int main()
 {
    
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    
    int total_calories = 0;
    for (char c : s) {
        if (c == '1') total_calories += a1;
        else if (c == '2') total_calories += a2;
        else if (c == '3') total_calories += a3;
        else if (c == '4') total_calories += a4;
    }

    cout << total_calories << endl;

    return 0;
}
