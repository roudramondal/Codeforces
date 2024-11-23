#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a, b,gcd;
  cin >> a >> b;
  while (b!=0)
  {
    gcd = b;
    b = a%b;
    a = gcd;
  }
  cout << a << endl;
  
  return 0;
}