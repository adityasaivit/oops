#include <stdio.h>
int main()
{
    
    int a[100]={1,1};
    
    int n;
    int m=3;
    scanf("%d",&n);
    int z1=n;
    for(int z11=1;z11<=n+2;z11++)
    {
        if(z11==n+2)
        {
            printf("1\n");
        }
        else{
            printf(" ");
        }
    }
    for(int i=1;i<=n-1;i++)
    {
        int a1[100]={0};

        for(int j=1;j<=m;j++)
        {
            if(j==1)
            {
                a1[j-1]=a[i-1];
            }
            if(j==m)
            {
                a1[j-1]=a[m-2];
            }
            else
            {
                a1[j-1]=a[j-1]+a[j-2];
            }
        }
        
        for(int b=1;b<=n;b++)
        {
            if(b>=z1)
            {
                for(int z=1;z<=m;z++)
                    {
                        printf("%d ",a1[z-1]);
                        a[z-1]=a1[z-1];
                    }

                    printf("\n");
                    m++;
                    z1--;
                    break;
                    
            }
            else
            {
                printf(" ");
            }
        }
    }
}