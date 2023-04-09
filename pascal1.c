#include <stdio.h>
int main()
{
    printf("enter the numnber:");
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}