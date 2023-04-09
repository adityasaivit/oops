#include <stdio.h>
int main()
{
    int b=20;
    int *c;
    c=&b;
    printf("the location was %p\n",c);
    printf("the pointer value is %d\n",*c);
    printf("the value of b is %d\n",b);


}