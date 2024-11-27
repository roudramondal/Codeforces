#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n,key;
  cin >> n >> key;
  int a[50];
  for (int i = 0; i < n;i++)
  {
    cin >> a[i];
  }
  int key1 = a[key - 1];
  int count = 0;
  for (int i = 0; i < n;i++)
  {
    if (a[i]>=key1&&a[i]>0)
      count++;
  }
  cout << count << endl;
  return 0;
}