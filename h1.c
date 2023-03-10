#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);

    }
    printf("enter the age of the employee:");
    int age;
    int sum=0;
    scanf("%d",&age);
    for(int j=1;j<=n;j++)
    {
        if(age==a[j-1])
        {
            printf("age:%d at:%d ",age,j-1);
            sum=1;
            break;
        }
    }
    if(sum==0)
    {
        printf("%d",-1);
    }

}