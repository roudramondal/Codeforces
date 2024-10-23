#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a, b;
  char ch;
  cin >> a>> ch >> b;
  
  switch(ch)
  {
    case  '+':
      cout << (a + b) << endl;
      break;
    case '-':
      cout << (a - b) << endl;
      break;
    case '*':
      cout << (a * b) << endl;
      break;
    case '/':
     if (b != 0)
     {
       cout << (a / b) << endl;
     }
     else 
     {
       cout << "Error " << endl;
     }
      break;

      default:
      break;
  }

  return 0;
}