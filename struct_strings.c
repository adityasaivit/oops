#include <stdio.h>
#include <string.h>
struct names 
{
  char na[100];

};
int main()
{
  struct names na1[100];
  int l;
  scanf("%d",&l);
  for(int i=1;i<=l+1;i++)
    {
      char n1[100];
      fgets(n1,100,stdin);
      strcpy(na1[i-1].na,n1);
    }
  for(int j=1;j<=l+1;j++)
    {
      printf("%s",&na1[j-1].na);
    }
}
