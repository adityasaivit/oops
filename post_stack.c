#include <stdio.h>
#include <string.h>
int t=-1;
char a[100];
int main()
{
    void push(char c);
    void pop();
    char b[100];
    fgets(b,100,stdin);
    int l=strlen(b)-1;
    for(int i=0;i<l;i++)
    {
        if(b[i]=='(')
        {
            push(b[i]);
        }
        else if((b[i]=='+')|(b[i]=='-')|(b[i]=='*')|(b[i]=='/'))
        {
            push(b[i]);
        }
        else if(b[i]==')')
        {
            pop();
        }
        else
        {
            printf("%c",b[i]);
        }
        
    }
}
void push(char c)
{
    t++;
    a[t]=c;
    //printf("%c",a[t]);
}
void pop()
{
    printf("%c",a[t]);
    t--;
}