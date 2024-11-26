#include<stdio.h>
int main ()
{
  int n,i;
  int ans, even = 0, odd = 0;
  scanf("%d", &n);
  int a[105];
  for (i = 1; i <= n;i++)
  {
    scanf("%d",&a[i]);
  }
  for (i = 1; i <= n;i++)
  {
    if (a[i]%2==0)
      even++;
      else
        odd++;
  }
  if (even==1)
  {
    for (i = 1; i <= n;i++)
    {
    if (a[i]%2==0)
    {
      ans = i;
    }
    }
  }
  else
  {
    for (i = 1; i <= n;i++)
    {
      if (a[i]%2!= 0)
      {
          ans = i;
      }
    }
  }
  printf("%d\n",ans);
  return 0;
}