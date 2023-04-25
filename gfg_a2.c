#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("a1");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
    }
    printf("a2");
    for(int j=1;j<=n;j++)
    {
        scanf("%d",&b[j-1]);
    }
    int c=0;
    for(int x=1;x<=n;x++)
    {
        for(int y=1;y<=n;y++)
        {
            if(a[x-1]==b[y-1])
            {
                c++;
            }
        }
    }
    printf("%d",c);
    if(c==n)
    {
        printf("found same");
    }
    else
    {
        printf("not found");
    }

}
