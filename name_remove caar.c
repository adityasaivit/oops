#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    fgets(s,100,stdin);
    char c1;
    scanf("%c",&c1);
    int l=strlen(s)-1;
    for(int i=1;i<=l;i++)
    {
        if(c1==s[i-1])
        {
            continue;
        }
        else
        {
            printf("%c",s[i-1]);
        }
    }
}
