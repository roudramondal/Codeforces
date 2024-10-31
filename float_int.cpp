#include<bits/stdc++.h>
using namespace std; 
int main ()
{
  double number;
  cin >> number;
  int INT = number;
  double result = number-INT;
  if(result>0)
  {
    cout << "float" << " " << INT << " "
         << result << endl;
  }
  else 
  {
    cout << "int" << " " << INT << endl;
  }
  return 0;
}