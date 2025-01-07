#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int count = 0;
  for (int i = 0; i < n;i++)
{
  int pi, qi;
  cin >> pi >> qi;
  if (qi-pi>=2)
  {
    count++;
  }
}
 cout << count << endl;
  return 0;
}