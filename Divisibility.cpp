#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int result = 0;
  int sum = 0;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    if (a % b!=0)
    {

      cout << b - (a % b) << endl;
    }
    else 
    {
      cout << "0" << endl;
    } 
    
  }
  return 0;
}