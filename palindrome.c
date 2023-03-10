#include <stdio.h>
#include <string.h>
int main()
{
    printf("enter the number:");
    char name[100];
    scanf("%s",&name);
    int l=strlen(name);
    int count=0;
    for(int i=1;i<=l;i++)
    {
        if(name[i-1]==name[l-i])
        {
            count++;
        }
    }
    if(count==l)
    {
        printf("yes");

    }
    else
    {
        printf("no");
    }

}