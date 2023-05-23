#include <stdio.h>
int m;
int f=0;
int r=-1;
int a[100];
void enqueue(int n)
{
    r++;
    a[r]=n;
    printf("pushed\n");
}
int dequeue()
{
    int b=a[f];
   // printf("%d",a[f]);

    f++;
    return b;
}
void show()
{
    for(int i=f;i<=r;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int t;
    while(1)
    {
        scanf("%d",&t);
        if(t==-1)
        {
            break;
        }
        else
        {
            enqueue(t);
        }
    }
    
    scanf("%d",&m);
    int b[m];
    for(int i=1;i<=m;i++)
    {
        b[i-1]=dequeue();
        //printf("%d",b[i-1]);
    }
    //show();
    for(int x=1;x<=m;x++)
    {
        for(int y=1;y<m;y++)
        {
            if(b[y-1]>b[y])
            {
                int t=b[y-1];
                b[y-1]=b[y];
                b[y]=t;
            }
        }
    }
    for(int z=1;z<=m;z++)
    {
        printf("%d",b[z-1]);
    }
    show();

}
