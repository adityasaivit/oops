#include <stdio.h>
int main()
{
    int a[3];
    printf("enteer the numbers:");
    for(int i=1;i<=3;i++)
    {
        scanf("%d",&a[i-1]);
    }
    int max=a[0];
    for(int i=1;i<=3;i++)
    {
        if(a[i-1]>max)
        {
            max=a[i-1];
        }
    }
    for(int j=1;j<=3;j++)
    {
        if(max==a[j-1])
        {
            a[j-1]=0;
        }
    }
    max=a[0];
    for(int k=1;k<=3;k++)
    {
        if(a[k-1]>max)
        {
            max=a[k-1];
        }
    }
    printf("%d",max);
    
}