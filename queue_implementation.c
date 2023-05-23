#include <stdio.h>
int f=0;
int r=-1;
int a[100];
void enqueue(int n)
{
    r++;
    a[r]=n;

}
void dequeue()
{
    printf("%d",a[f]);
    f++;
}
void show()
{
    for(int j=f;j<=r;j++)
    {
        printf("%d",a[j]);
    }
}

int main()
{
    int n1;
    while(1)
    {
        scanf("%d",&n1);
        if(n1==1)
        {
            int t;
            scanf("%d",&t);
            enqueue(t);
        }
        if(n1==2)
        {
            dequeue();

        }
        if(n1==3)
        {
            show();
        }
        if(n1==-1)
        {
            break;
        }
    }
}
