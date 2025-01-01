#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    for (int i = 0; i < 3;i++)
    {
      if (s[i]>='A'&&s[i]<='Z')
      {
        s[i] = s[i] + ('a' - 'A');
      }
    }
    if (s[0]=='y'&&s[1]=='e'&&s[2]=='s')
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
 }
    
  return 0;
}