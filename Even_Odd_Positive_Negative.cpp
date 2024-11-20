#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  int a;
  scanf("%d", &n);
  int c = 0,p=0,y=0,o=0;
  while (n--)
 {
   
   scanf("%d", &a);
    if (a%2==0)
    c++;
   
    else 
      o++;
    
    if (a>=1&&a!=0)
     p++;
    
   else if (a<0)
     y++;
   
 }
  printf("Even: %d\n", c);
  printf("Odd: %d\n",o);
  printf("Positive: %d\n", p);
  printf("Negative: %d\n", y);
   return 0;
}