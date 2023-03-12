#include <stdio.h>
#include <string.h>
int main()
{
    char n1[100]="";
    char n2[100]="";
    int s1=0;

    fgets(n1,100,stdin);
    fgets(n2,100,stdin);
    
    int l1=strlen(n1);
    int l2=strlen(n2);
    int sum=0;
    for(int i=1;i<=l1;i++)
    {
        int c1=0;int c2=0;
        for(int j=1;j<=l2;j++)
        {
            if(n1[i-1]==n1[j-1])
            {
                c1++;
            }
            if(n1[i-1]==n2[j-1])
            {
                c2++;
            }
        }
        if(c1==c2)
        {
            sum++;
        }
    }
    if(sum==l1)
    {
        printf("Anagram");
        
    }	 	  	 	  	 	    	      	      	   	       	 	
    else if(s1!=1)
    {
        printf("not anagrams");
    }
}