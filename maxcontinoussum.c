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
    int b[n*n];
    int c=0;
    for(int x=1;x<=n;x++)
    {
        for(int y=x;y<=n;y++)
        {
            int sum=0;
            for(int z=x;z<=y;z++)
            {
                sum=sum+a[z-1];


            }
            b[c]=sum;
            c++;
        }
    }
    int max=b[0];
    for(int k=1;k<=c;k++)
    {
        if(b[k-1]>max)
        {
            max=b[k-1];
        }
    }
    printf("%d",max);
}
