#include <stdio.h>
int max(int b[],int n1)
{
    int max=b[0];
    for(int i=1;i<=n1;i++)
    {
        if(b[n1-1]>max)
        {
            max=b[n1-1];
        }
    }
    return max;
}
int min(int b[],int n1)
{
    int min=b[0];
    for(int i=1;i<=n1;i++)
    {
        if(b[n1-1]<min)
        {
            min=b[n1-1];
        }
    }
    return min;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
        int maximum=max(a,n);
        int minimum=min(a,n);
        
    }
    printf("the maximum value is %d\n",max(a,n));
    printf("the minimum value is %d",min(a,n));
}
