#include <stdio.h>
#include <string.h>
int t=-1;
int a[100];
int num(char c)
{
   switch(c)
   {
        case '(':
            return 1;
        case ')':
            return 2;
        case '+':
            return 3;
        case '-':
            return 3;
        case '*':
            return 4;
        case '/':
            return 4;
        default:
        return 0;
   }

}
int main()
{
    char inf[100];
    void push(char c);
    void pop();
    scanf("%s",inf);
    int l=strlen(inf);
    for(int i=1;i<=l;i++)
    {
        //printf("%d\n",num(inf[i-1]));
        if(num(inf[i-1])==0)
        {
            printf("%c",inf[i-1]);
        }
        else if(num(inf[i-1])==1)
        {
            push(inf[i-1]);
        }
        else if(num(inf[i-1])==2)
        {
            while(1)
            {
                pop();
                if(a[t]=='(')
                {
                    pop();
                    break;
                }
            }
        }
        else if(num(inf[i-1])==3)
        {
            if(num(a[t])>=3)
            {
                pop();
                push(inf[i-1]);
            }
            else
            {
                push(inf[i-1]);
            }
        }
        else if(num(inf[i-1])==4)
        {
            if(num(a[t])==4)
            {
                pop();
                push(inf[i-1]);
            }
            else
            {
                push(inf[i-1]);
            }
        }
    }
    for(int i=0;i<=t;i++)
    {
        pop();
    }
}
void push(char c)
{
    t++;
    a[t]=c;
}
void pop()
{
    if(a[t]!='(')
    {
        printf("%c",a[t]);
    }
    t--;
}
