#include <stdio.h>
#include <string.h>
struct office
{
    int reg;
    char name[100];
    int sal;
};
int main()
{
    int n;
    scanf("%d",&n);
    int f=0;
    struct office e[n];
    for(int i=1;i<=n;i++)
    {
        if(scanf("%d",&e[i-1].reg)==0)
        {
            f=1;
        }
        char n[100];
        scanf("%s",n);
        strcpy(e[i-1].name,n);
        if(scanf("%d",&e[i-1].sal)==0)
        {
            f=1;
        }
        
    }
    int max=e[0].sal;
    int x=0;
    for(int k=1;k<=n;k++)
    {
        if(e[k-1].sal>max)
        {
            max=e[k-1].sal;
            x=k-1;
        }
    }
    int cou=0;
    for(int y=1;y<=n;y++)
    {
        if(max==e[y-1].sal)
        {
            cou++;
        }
    }
    printf("%d\n",f);
    printf("%d",cou);
    if(cou==1)
    {
    printf("%d %s %d",e[x].reg,e[x].name,e[x].sal);
    }
    else
    {
        printf("cannot be detemined");
    }
}
