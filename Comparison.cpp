#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a, b;
  char s;
  cin>>a>>s>>b;
  if ((s=='>'&& a>b)||(s=='<'&& a<b)||(s=='='&& a==b))
  {
    cout << "Right" << endl;
  }
  
  else 
  {
    cout << "Wrong" << endl;
  }
  return 0;
}