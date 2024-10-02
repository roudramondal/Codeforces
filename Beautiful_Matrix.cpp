#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int a[5][5];
  int x, y;
  for (int i = 0; i < 5;i++)
{
  for (int  j = 0; j < 5; j++)
  {
    cin >> a[i][j];
    if(a[i][j]==1)
    {
      x = i + 1;
      y = j + 1;

    }
  }
  
}
int moves = abs(x - 3) + abs(y - 3);
cout << moves << endl;
}