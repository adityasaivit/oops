#include <stdio.h>
int main()
{
    int n;
    int z;
    scanf("%d",&n);
    int a[100];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);

    }
    for(int i=1;i<=n;i++)
    {
        int s=a[i-1];
        for(int j=i;j<=n;j++)
        {
            if(s>=a[j-1])
            {
                s=a[j-1];
                z=j-1;
            }
        }
        int z1=a[i-1];
        a[i-1]=a[z];
        a[z]=z1;
        
    }
    for(int k=1;k<=n;k++)
    {
        printf("%d ",a[k-1]);
    }
}