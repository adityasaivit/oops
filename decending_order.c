#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100]={0};
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);

    }
    for(int j=1;j<=n;j++)
    {
        int s=a[j-1];
        int sum=0;
        for(int k=1;k<=n;k++)
        {
            if(s<a[k-1])
            {
                s=a[k-1];
            }
        }
        printf("%d  ",s);
        for(int k1=1;k1<=n;k1++)
        {
            if(s==a[k1-1])
            {
                a[k1-1]=-999999;
                sum++;
                if(sum!=1)
                {
                    a[k1-1]=s;
                }
            }
        }
        
        

    }
}
