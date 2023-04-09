#include <stdio.h>
#include <string.h>
int main()
{
    char p[100];
    int s[11];
    int sum=0;
    char pm[100];
    for(int i=1;i<=11;i++)
    {
        //scanf("%s",&p);
        fgets(p,100,stdin);
        int su=0;
        scanf("%d",&s[i-1]);
        sum=sum+s[i-1];
        int m;
        for(int j=1;j<=i;j++)
        {
            if(s[i-1]<=s[j-1])
            {
                m=s[j-1];
            }
        }
        if(m==s[i-1])
        {
            for(int k=1;k<=strlen(p);k++)
            {
                pm[k-1]=p[k-1];
            }
        }
    }
    printf("%d\n",sum);
    printf("%s",pm);
}