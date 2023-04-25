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
        int sum1=0;
        int sum2=0;
        for(int y=1;y<x;y++)
        {
            sum1=sum1+a[y-1];
        }
        for(int z=x;z<n;z++)
        {
            sum2=sum2+a[z];
        }
        if(sum1==sum2)
        {
            printf("%d",a[x-1]);
        }
    }
}
