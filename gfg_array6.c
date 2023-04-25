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
    for(int i=1;i<=n;i++)
    {
        int c=0;
        for(int j=i;j<=n;j++)
        {
            if(a[i-1]>a[j-1])
            {
                c++;
            }
        }
        if(c==(n-i))
        {
            printf("%d",a[i-1]);
        }
    }
}
