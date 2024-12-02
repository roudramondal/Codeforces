#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int t;
  cin >> t;
  while (t--)
  {
    long long l, r;
    cin >> l >> r;
    if (l > r) 
    {
      swap(l, r);
    }
    long long  L = (long long)l * (l - 1) / 2;
    long long  R = (long long)r * (r + 1) / 2;
    long long  sum = R-L;
    cout << sum << endl;
  }
  return 0;
}