#include <stdio.h>
int main()
{
    printf("enter the number:");
    int n;
    scanf("%d",&n);
    int n1=n;
    int p=1;
    int sum=0;
    while(n!=0)
    {
        int n2=n%10;
        int pro=1;
        for(int j=1;j<=n2;j++)
        {
            pro*=j;
        }
        sum+=pro;
        n=n/10;

    }
    if(sum==n1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

}