#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i;
  bool isprime=true;
  cin >> n;
  if (n<=1)
  {
    cout << "NO" << endl;
    return 0;
  }
 
  for (i = 2; i*i<= n;i++)
  {
    if (n%i==0)
    {
      isprime = false;
      break;
    }
    
  }
  if (isprime)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}