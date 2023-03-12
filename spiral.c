#include <stdio.h>
int main()
{
    int m,n;
    int a[10][10];
    scanf("%d",&m);
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a[i-1][j-1]);
        }
    }
    int r=m/2;
    for(int x=1;x<=r+1;x++)
    {
        for(int y=1;y<=n-(x-1);y++)
        {
            printf("%d\n",a[x-1][y-1]);
        }
        for(int z=2;z<=m;z++)
        {
            printf("%d\n",a[z-1][n-x]);
            
        }
        for(int z1=n-x;z1>x-1;z1--)
        {
            printf("%d\n",a[m-x][z1-1]);
        }
        
    }
    
}
	 	  	 	  	 	    	      	      	   	       	 	
