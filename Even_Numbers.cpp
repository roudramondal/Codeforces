#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  bool even = false;
  for (int i = 2; i <= n;i+=2)
  {
    cout << i << endl;
    even = true;
  }
  
  if (!even)
  {
    cout << "-1" << endl;
  }

  return 0;
}