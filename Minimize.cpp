#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b,c;
    cin >> a >> b ;
      c = (a + b) / 2;
      cout << (c - a) + (b - c) << endl;   
  }
  return 0;
}