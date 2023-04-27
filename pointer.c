#include <stdio.h>
void update(int *a,int *b)
{
    int t=*a;
    *a=*a+*b;
    *b=*b*t;
}
int main()
{
    int p,q;
    scanf("%d %d",&p,&q);
    int *x=&p;
    int *y=&q;
    update(x,y);
    printf("%d %d",p,q);
}
