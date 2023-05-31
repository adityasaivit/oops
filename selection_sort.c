//selection sort
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
        int k1=j-1;
        int min=a[j-1];
        for(int k=j;k<=n;k++)
        {
            if(a[k-1]<a[j-1])
            {
                min=a[k-1];
                k1=k-1;
            }
            
        }
        int temp=a[j-1];
        a[j-1]=a[k1];
        a[k1]=temp;
    }
    for(int x=1;x<=n;x++)
    {
        printf("%d ",a[x-1]);
    }
}
