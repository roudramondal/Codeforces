#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  double  sum =0;
  double total ;
  int i = 1;
  while (n--)
  {
    int pi;
    cin >> pi;
    sum =(sum+pi);
    total = (sum / i);
    i++;
  }
  cout << fixed << setprecision(12) << total<< endl;
  return 0;
}