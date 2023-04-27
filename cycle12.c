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
            if(a[y-1]<a[y])
            {
                int t=a[y-1];
                a[y-1]=a[y];
                a[y]=t;
            }
        }
    }
    for(int x1=1;x1<=n;x1++)
    {
        printf("%d ",a[x1-1]);
    }
    int p=a[1];
    int sum=p;
    int sum1=1;
    while(sum/10!=0)
    {
        int sum1=0;
        while(sum!=0)
        {
            sum1+=sum%10;
            sum=sum/10;
        }
        if(sum1/10==0)
        {
            printf("%d",sum1);
            break;
        }
        else
        {
            sum=sum1;
        }
    }
    

    }
