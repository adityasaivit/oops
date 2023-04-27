#include <stdio.h>
int fac(int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p*=i;
    }
    return p;
}
int com(int n,int r)
{
    
    return fac(n)/((fac(r))*fac(n-r));
}
int main()
{
    int n,r1,m,r2;
    //printf("enter n,r1");
    scanf("%d %d %d %d",&n,&r1,&m,&r2);
    printf("%d",com(n,r1)*com(m,r2));
}
