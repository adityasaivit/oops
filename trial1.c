#include <stdio.h>
#include <string.h>
int t=-1;
int a[100];
int op(char c)
{
    if((c=='+')||(c=='-'))
    {
        printf("%d",1);
        return 1;
    }
    else if((c=='*')||(c=='/'))
    {
        printf("%d",2);
        return 2;

    }
    else if(c=='(')
    {
        printf("%d",3);
        return 3;
    }
    else if(c==')')
    {
        return 4;
    }
    else
    {
        return 0;
    }
}
int main()
{
    void push(char n);
    void pop();
    void show();
    char inf[100];
    scanf("%s",inf);
    int l=strlen(inf);
    for(int i=1;i<=l;i++)
    {
        if(op(inf[i-1]==0))
        {
            printf("%c",inf[i-1]);
        }
        else if(op(inf[i-1])==1)
        {
            if((op(inf[t])==2)||(op(inf[t])==1))
            {
                pop();
                push(inf[i-1]);

            }
            else
            {
                push(inf[i-1]);
            }
        }
        else if(op(inf[i-1])==2)
        {
            if(op(inf[t])==2)
            {
                pop();
                push(inf[i-1]);
            }
            else
            {
                push(inf[i-1]);
            }
        }
        else if(op(inf[i-1])==3)
        {
            push(inf[i-1]);
        }
        else if(op(inf[i-1])==4)
        {
            while(a[t]!='(')
            {
                pop();
            }
        }
        else
        {
            printf("%c",inf[i-1]);
        }
    }
    show();

}
void push(char n)
{
    t++;
    a[t]=n;
}
void pop()
{
    if(a[t]!='(')
    {
        printf("%c",a[t]);
    }
    t--;
}
void show()
{
    for(int i=1;i<=t;i++)
    {
        pop();
    }
    if(a[0]!='(')
    {
        printf("%c",a[0]);
    }
}
