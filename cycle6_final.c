#include <stdio.h>
#include <string.h>
struct match 
{
    char name[100];
    int s;
};
int main()
{
    struct match m[5];
    int tot=0;
    for(int i=1;i<=5;i++)
    {
        char n[100];
        scanf ( "%s", n ) ;
        strcpy(m[i-1].name,n);
       // printf("%s",m[i-1].name);
        scanf("%d",&m[i-1].s);
        tot+=m[i-1].s;
    }
    printf("%d",tot);
    int max=m[0].s;
    int k;
    for(int j=1;j<=5;j++)
    {
        if(m[j-1].s>max)
        {
            max=m[j-1].s;
            k=j-1;
        }
    }
    int count=0;
    for(int x=1;x<=5;x++)
    {
        if(max==m[x-1].s)
        {
            count++;
        }
    }
    if(count==1)
    {
    printf("\n%s",m[k].name);
    }
    else
    {
        printf("\ncannot determined");
    }
}
