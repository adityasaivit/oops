#include <stdio.h>
int t=-1;
int ff=0;
int a[100];
int main()
{
    void push(int n);
    void pop();
    void show();
    int n;
    int n1;
    while(1)
    {
        scanf("%d",&n);
        if(n==1)
        {
            scanf("%d",&n1);
            push(n1);
        }
        else if(n==2)
        {
            pop();

        }
        else if(n==3)
        {
            show();
        }
        else
        {
            break;
        }
    }

}
void push(int n)
{
    t++;
    a[t]=n;
}
void pop()
{
    ff++;
}
void show()
{
    for(int i=ff;i<=t;i++)
    {
        printf("%d ",a[i]);
    }
}
