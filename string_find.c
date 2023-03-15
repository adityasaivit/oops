#include <stdio.h>
#include <string.h>
int main()
{
    char p[1000];
    char k[1000];
    fgets(p,1000,stdin);
    fgets(k,1000,stdin);
    int l1=strlen(p)-1;
    int l2=strlen(k)-1;
    for(int i=1;i<=l1;i++)              
    {
        int sum=0;
        for(int j=1;j<=l2;j++)
        {
            //if((i+j)<l1)
            {
                if((p[i-1+j-1])==k[j-1])
                {
                    sum++;
                }
            }
        }
        if(sum==l2)
        {
            printf("%d\n",i-1);
        }
    }
}	 	  	 	  	 	    	      	      	   	       	 	
