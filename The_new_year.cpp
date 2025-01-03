#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;
  int min1 =min (x1, min(x2, x3));
  int max1 = max(x1, max(x2, x3));
  int sum = (x1 + x2 + x3) - min1 - max1;
  int result = (max1 - sum) + (sum - min1);
  cout << result << endl;
  return 0;
}