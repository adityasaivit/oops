#include <stdio.h>
int main()
{
    int n;
    int s;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&s);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
    }
    int g[n];
    int sum=0;
    for(int x=1;x<=n;x++)
    {
        
        sum=sum+a[x-1];
        g[x-1]=a[x-1];
        if(sum==s)
        {
            for(int y=1;y<=x;y++)
            {
                printf("%d",g[y-1]);
            }
        }
        
    }
}
