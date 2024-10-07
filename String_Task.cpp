#include<bits/stdc++.h>
using namespace std;
bool vowel_check(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i';
}

int main()
{

    string str;
    cin >> str;
    string add;

    for(char ch : str){
        if(!vowel_check(ch)){
            add+= '.';
            add+= tolower(ch);
        }
    }
    cout << add << "\n";
    return 0;
}