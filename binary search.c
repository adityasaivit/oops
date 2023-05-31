//binary search
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
    }
    int f=0;
    int l=n-1;
    int n1;
    scanf("%d",&n1);
    for(int i=1;i<=n;i++)
    {
        int m=(f+l)/2;
        if(a[m]==n1)
        {
            printf("found at %d",m);
            break;
        }
        else if(n1>a[m])
        {
            f=m;
        }
        else if(a[m]>n1)
        {
            l=m;
        }
    }
}
