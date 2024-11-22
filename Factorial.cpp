#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long  t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    long long temp = 1;
    for (int i = 1; i <= n;i++)
    {
      temp = temp*i;
      
    }
    cout << temp << endl;
  }
  return 0;
}