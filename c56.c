#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
    }
    int n1;
    scanf("%d",&n1);
    for(int j=1;j<=n1;j++)
    {
        if(n1==a[j-1])
        {
            printf("%d is found  at index %d",n1,j-1);
        }
    }
}