#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, h,x;
  cin >> n >> h;
  int sum = 0;
  for (int i = 1; i <= n;i++)
  {
    cin >> x;
    if (x>h)
  {
    sum += 2;
  }
  else 
  {
    sum ++;
  }
  }
 
  cout << sum << endl;
  return 0;
}