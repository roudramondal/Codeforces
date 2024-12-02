#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n,key;
  cin >> n>>key;
  int a[n];
  for (int i = 0; i < n;i++)
  {
    cin >> a[i];
  }
  
  for (int i = 0; i <n;i+=key)
  {
    int group_min = INT_MAX;
    for (int j = i; j <i+key&&j<n;j++)
    {
      group_min = min(group_min, a[j]);
    }

      cout << group_min <<" ";
  }
  cout << endl;
  return 0;
}