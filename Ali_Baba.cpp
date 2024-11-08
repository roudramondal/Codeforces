#include <bits/stdc++.h>
using namespace std;
void solve ()
{
  long long a, b, c, d;  
    cin >> a >> b >> c >> d;
    if (a+b-c==d||a-b+c==d)
    {
      cout << "YES" << endl;
    }
    else if (a+b*c==d||a*b+c==d)
    {
      cout << "YES" << endl;
    }
    else if (a-b+c==d||a+b-c==d)
    {
      cout << "YES" << endl;
    }
    else if (a-b*c==d||a*b-c==d)
    {
      cout << "YES" << endl;
    }
    else if (a*b+c==d||a+b*c==d)
    {
      cout << "YES" << endl;
    }
    else if (a*b-c==d||a-b*c==d)
    {
      cout << "YES" << endl;
    }
    else 
    {
      cout << "NO" << endl;
    }

}

int main() 
{
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}
