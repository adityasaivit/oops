#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
    }
    for(int x=1;x<=n;x++)
    {
        for(int y=1;y<n;y++)
        {
            if(a[y-1]>a[y])
            {
                int t=a[y];
                a[y]=a[y-1];
                a[y-1]=t;
            }
        }
    }
    for(int z=1;z<=n;z++)
    {
        printf("%d",a[z-1]);
    }
}
