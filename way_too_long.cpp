#include<stdio.h>
#include<string.h>
using namespace std;
int main  ()
{
  int n;
  scanf("%d", &n);
  getchar();
  while (n--)
  {
   char  nam[1000];
  fgets(nam, sizeof(nam), stdin);
   nam[strcspn(nam, "\n")] = '\0';
  int l = strlen(nam) ;
  if (l>10)
  {
    printf("%c%d%c\n", nam[0], l - 2, nam[l - 1]); 
  }
  else
  {
    printf("%s\n", nam);
  }
  }
  
  return 0;
}
