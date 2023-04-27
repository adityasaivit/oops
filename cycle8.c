#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char name[100];
    char course[100];
    char no[10];
    scanf("%s",name);
    scanf("%s",no);
    scanf("%s",course);
    //printf("%s",name);
        int l=strlen(name);
        int c=0;
        for(int j=1;j<=l;j++)
        {
            if(isalpha(name[j-1]))
            {
                c++;
            }
        }
        
        l=strlen(no);
        int d=0;
        for(int k=1;k<=l;k++)
        {
            if(isdigit(no[k-1]))
            {
                d++;
            }
        }
        l=strlen(course);
        int e=0;
        for(int x=1;x<=l;x++)
        {
            if(isalpha(course[x-1]))
            {
                e++;
            }
        }
        printf("%d %d %d",c,d,e);
        if(strlen(name)!=c)
        {
            printf("enter a valid name");
        }
        else if(strlen(no)!=d)
        {
            printf("enter a valid number");
        }
        else if(strlen(course)!=e)
        {
            printf("enter a valid course");
        }
        else
        {
            printf("%s\n%s\n%s",name,no,course);
        }
    
}
