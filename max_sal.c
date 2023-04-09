#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int sa[100];
    char em[100];
    int em2;
    int m;
    printf("enter the number of employees:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int re;
        char em1[100];
        scanf("%d",&re);
        //int m;
        fgets(em1,100,stdin);
        scanf("%d",&sa[i-1]);
        for(int j=1;j<=i;j++)
        {
            if(sa[i-1]<=sa[j-1])
            {
                m=sa[j-1];
            }
        
        }
        if(m==sa[i-1])
        {
            for(int k=1;k<=strlen(em1);k++)
            {
                em[k-1]=em1[k-1];
            }
            em2=re;
        }

    }
    printf("%s",em);
    printf("%d",em2);
    printf("%d",m);

}