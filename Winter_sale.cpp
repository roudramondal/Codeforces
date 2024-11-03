#include<bits/stdc++.h>
using namespace std;
void solve ()
{
  double discount, currentprice;
  cin >> discount >> currentprice;
  double orignalprice = currentprice / (1 - discount / 100);
  cout << fixed << setprecision(2) << orignalprice << endl;
}
int main ()
{
  solve();
  return 0;
}