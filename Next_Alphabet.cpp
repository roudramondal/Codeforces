#include<bits/stdc++.h>
using namespace std;
int main ()
{
  char c;
  cin >> c;
  if (c >= 'a'&&c<'z')
    {
      cout << char ( c + 1) <<endl;
      
    }
    else if (c=='z')
    {
      cout << 'a' << endl;
    }
    return 0;
}