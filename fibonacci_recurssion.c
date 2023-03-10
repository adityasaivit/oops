#include <stdio.h>
int fib(int x,int y,int n)
{
    if(n!=0)
    {
        int z=x+y;
        int z1=y;
        y=z;
        x=z1;
        printf("%d ",z);
        return fib(x,y,n-1);
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
    //printf("1 1");
    fib(1,1,n);
}