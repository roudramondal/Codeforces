#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int count = 0;
  char p = ' ';
  while(n--)
  {
    char s;
    cin >> s;
    if (s==p)
    {
    count++;
    }
    p = s;
  }
  cout << count << endl;
  return 0;
}