#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  //char p = ' ';
  bool iscount = false;
  while (n--)
  {
    int s;
    cin >> s;
    if(s==1)
    {
      iscount = true;
    }
    
  }
  if(iscount)
  {
    cout << "HARD" << endl;
  }
  else
  {
    cout << "EASY" << endl;
  }
  return 0;
}