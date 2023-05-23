#include <stdio.h>
int t=-1;
int a[100];
void push(int n)
{
    t++;
    a[t]=n;
    printf("pushed");
}
void pop()
{
    printf("%d",a[t]);
    t--;
}
int main()
{
    int n1;
    scanf("%d",&n1);
    int t1;
    for(int i=1;i<=n1;i++)
    {
        scanf("%d",&t1);
        push(t1);
    }
    for(int j=0;j<n1;j++)
    {
        pop();
    }
}
