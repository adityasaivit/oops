#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=1;i<=n;i++)
    {
        a[i-1]=i;
        if(i<=n-1)
        {
             scanf("%d",&b[i-1]);
        }
       
    }
    for(int x=1;x<=n;x++)
    {
        for(int y=1;y<n;y++)
        {
            if(a[x-1]==b[y-1])
            {
                //printf("%d",b[y-1]);
                a[x-1]=0;
            }
        }
    }
    for(int z=1;z<=n;z++)
    {
        if(a[z-1]!=0)
        {
        printf("%d",a[z-1]);
        }
      // printf("%d",a[z-1]);
    }
}
