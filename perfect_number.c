#include <stdio.h>
#include <math.h>
int main()
{
    printf("enter the number:");
    int n;
    scanf("%d",&n);
    float r=sqrt(n);
    if((r-(int)r)==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

}