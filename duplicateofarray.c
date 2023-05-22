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
        int c=0;
        for(int k=1;k<=n;k++)
        {
            if(a[j-1]==a[k-1])
            {
                c++;
            }
        }
        if(c>1)
        {
            printf("true duplicate");
            break;
        }
    }
}
