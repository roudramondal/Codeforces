#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int max_num = 0;
  int current_num;
  for (int i = 0; i < n;i++)
  {
    cin >> current_num;
    if (current_num>max_num)
      max_num = current_num;
  }
  cout << max_num << endl;
  return 0;
}