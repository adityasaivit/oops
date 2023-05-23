#include <stdio.h>
int t=-1;
int a[100];
void push(int n)
{
    t++;
    a[t]=n;
    printf("pushed\n");
}
int middle()
{
    int m=t/2;
    return a[m];
}
void rmiddle()
{
    for(int i=0;i<=t;i++)
    {
        if(a[i]!=middle())
        {
            printf("%d",a[i]);
        }
    }
}
int main()
{
    int n1;int i11=1;
    while(i11>0)
    {
        scanf("%d",&n1);
        if(n1==-1)
        {
            break;
        }
        if(n1==1)
        {
            int t1;
            scanf("%d",&t1);
            push(t1);
        }
    }
    rmiddle();

}
