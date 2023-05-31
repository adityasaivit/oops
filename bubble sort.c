//bubble sort
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
        for(int k=1;k<n;k++)
        {
            if(a[k]<a[k-1])
            {
                int temp=a[k];
                a[k]=a[k-1];
                a[k-1]=temp;
            }
        }
    }
    for(int x=1;x<=n;x++)
    {
        printf("%d ",a[x-1]);
    }


}
