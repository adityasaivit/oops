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
    for(int j=1;j<=n;j++)
    {
        printf("%d ",a[n-j]);
    }
}
