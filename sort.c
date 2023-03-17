#include <stdio.h>
int main()
{
    int n,n1,c;
    int a[1000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);

    }
    int s=a[0];
    for(int i=1;i<=n;i++)
    {
        c=0;
        int s=a[i-1];
        for(int j=i;j<=n;j++)
        {
            if(s>a[j-1])
            {
                s=a[j-1];
                n1=j-1;
                c=1;
            }
        }
        if(c==1)
        {
            int temp=a[i-1];
            a[i-1]=s;
            a[n1]=temp;
        }
    }
    for(int k=1;k<=n;k++)
    {
        printf("%d",a[k-1]);
    }
}