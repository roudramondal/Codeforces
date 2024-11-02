#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int   a, b, c, d;
  cin >> a >> b >> c >> d;
  a = a % 100;
  b = b % 100;
  c = c % 100;
  d = d % 100;
  int  x = a * b * c * d;
  int  y = x % 100;
  if (y < 10)
  {
    cout << 0 << y << endl;
  }
  else 
  {
    cout << y <<endl;
  }
  return 0;
}