#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long  a, b,c;
  cin >> a>>b;
 if(a%2==0)
 {
   c = a / 2;
 }
 else 
 {
   c = (a + 1) / 2;
 }
 if (b<=c) //odd
 {
   cout << (b * 2) - 1;
 }
 else 
 {
   cout << (b - c) * 2 << endl;
 }
  return 0;
}
