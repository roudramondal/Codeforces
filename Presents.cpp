#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int pi[n];
  for (int i = 0; i < n;i++)
  {
    
    cin >> pi[i];
  }
  int result[n];
  for (int i = 0; i < n;i++)
  {
    result[pi[i] - 1] = i + 1;
  }
  for (int i = 0; i < n;i++)
  {
    cout << result[i]<< endl;
  }
  return 0;
}
