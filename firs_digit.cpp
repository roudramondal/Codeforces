#include <bits/stdc++.h>
using namespace std;
int main ()
{
  long long  n1;
  cin >> n1;
  long long fs = n1 / 1000;
  if (fs%2==0)
  {
    cout << "EVEN" << endl;
  }
  else
    cout << "ODD" << endl;
  return 0;
}