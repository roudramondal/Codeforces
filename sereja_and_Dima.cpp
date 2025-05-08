#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int al = 0, bb = 0;
  int mv = 0;
  while(v.empty()==false)
  {
    if (mv==0)
    {
    if (v[0]>v.back())
    {
      al += v[0];
      v.erase(v.begin());
    }
    else
    {
      al += v.back();
      v.pop_back();
    }
    mv = 1;
    }
    else
    {
     if (v[0]>v.back())
     {
       bb += v[0];
       v.erase(v.begin());
     }
     else
     {
       bb += v.back();
       v.pop_back();
     }
     mv = 0;
    }
  }
  cout << al << ' ' << bb << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}