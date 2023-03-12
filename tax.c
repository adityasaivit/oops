#include <stdio.h>
int main()
{
    int in;
    printf("enter the slary:\n");
    scanf("%d",&in);
    float tax=in*(1.75/100);
    printf("%f",tax);
    return 0;
}