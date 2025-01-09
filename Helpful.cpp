#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
    string s;
    cin >> s;

    int count1 = 0, count2 = 0, count3 = 0;

    
    for (char c : s) {
        if (c == '1') count1++;
        else if (c == '2') count2++;
        else if (c == '3') count3++;
    }
   string result = "";

    for (int i = 0; i < count1; i++) {
        if (!result.empty()) result += '+';
        result += '1';
    }

    for (int i = 0; i < count2; i++) {
        if (!result.empty()) result += '+';
        result += '2';
    }

    for (int i = 0; i < count3; i++) {
        if (!result.empty()) result += '+';
        result += '3';
    }
    cout << result << endl;

    return 0;
}
