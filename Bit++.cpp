#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  int x;
  cin >> n;
  while (n--)
  {
    cin >> x;
    cout << ++x;
    cout << --x;
    cout << x << endl;
  }
  return 0;
}