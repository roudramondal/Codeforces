#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  long long count = 0;
  while (t--)
  {
    long long a, b;
    cin >> a >> b;
    
    long long diff = abs(b - a);
    long long result = (diff+9)/10;
    cout <<(result) << endl;
    
  }
  
  return 0;
}