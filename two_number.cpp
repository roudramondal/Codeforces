#include <bits/stdc++.h>
using namespace std;
int main ()
{
  double  a, b;
  cin >> a >> b;
 // int result = a / b;
  cout << "floor" << " " << a << " " << "/" << " " << b << " " << "=" << " " << floor(a/b) << endl;
  cout << "ceil" << " " << a << " " << "/" << " " << b << " " << "=" << " " << ceil(a/b) << endl;
  cout << "round" << " " << a << " " << "/" << " " << b << " " << "=" << " " << round(a/b) << endl;
  return 0;
}