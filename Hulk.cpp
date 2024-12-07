#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  string value = "";
  for (int i = 1; i <= n;i++)
  {
    if (i%2==1)
    {
      value += "I hate";
    }
    else 
    {
      value += "I love ";
    }
    if (i!=n)
    {
      value += " that ";
    }
    else 
    {
      value += " it";
    }
  }
  cout << value << endl;
  return 0;
}