#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[10][10];
    for(int i=1;i<=n;i++)
    {
        //fgets(a[i-1],10,stdin);
        scanf("%s",&a[i-1][10]);

    }
    for(int j=1;j<=n+1;j++)
    {
        printf("%s\n",a[j-1]);
    }
}