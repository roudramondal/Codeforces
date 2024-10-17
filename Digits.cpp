#include <bits/stdc++.h>
using namespace std;
int main ()
{
  long long  m, n;
  cin >> m >> n;
  long long  first = m % 10;
  long long  last = n % 10;
  long long  sum = first + last;
  cout << sum << endl;
  return 0;
}