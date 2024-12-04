#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n;i++)
  {
    cin >> a[i];
  }
  long long sum3 = 0;
  for (int i = 0; i < n;i++)
  {
    sum3 += (a[i]);
  }
  cout << abs(sum3) << endl;
  return 0;
}