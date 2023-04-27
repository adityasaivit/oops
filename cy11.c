#include <stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int p=prime(n);
    if(p==1)
    {
        while(n>0)
        {
            printf("%d",n%2);
            n=n/2;
        }
    }
    else
    {
        printf("%x",n);
    }
}
