//linear search
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&ar[i-1]);
    }
    int n1;
    scanf("%d",&n1);
    for(int j=1;j<=n;j++)
    {
        if(ar[j-1]==n1)
        {
            printf("found at index %d",j-1);
            break;
        }
    }
}
