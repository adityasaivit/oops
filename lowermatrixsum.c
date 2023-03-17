#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[10][10];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a[i-1][j-1]);
        }
    }
    int sum=0;
    for(int x=1;x<=m;x++)
    {
        for(int y=1;y<=n;y++)
        {
            if(x<=y)
            {
                sum=sum+a[x-1][y-1];
            }
        }
    }
    printf("%d",sum);
}