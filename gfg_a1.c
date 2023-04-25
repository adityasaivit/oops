#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    int a[n];
    scanf("%d",&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
    }
    for(int j=1;j<=n;j++)
    {
        if(j<=k)
        {
            printf("%d",a[k-j]);
        }
        else
        {
            printf("%d",a[j-1]);
        }
    }
}
