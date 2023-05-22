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
    int max=a[0];
    int min=a[0];
    for(int j=1;j<=n;j++)
    {
        for(int k=1;k<=n;k++)
        {
            if(a[k-1]<min)
            {
                min=a[k-1];

            }
            if(a[k-1]>max)
            {
                max=a[k-1];
            }
        }
    }
    printf("%d\n",max);
    printf("%d",min);
}
