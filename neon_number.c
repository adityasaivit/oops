#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int n1=n*n;
    //int n1=n;
    int s=0;
    while(n1!=0)
    {
        s+=n1%10;
        n1=n1/10;
    }
    if(s==n)
    {
        printf("neon number");
    }
}
