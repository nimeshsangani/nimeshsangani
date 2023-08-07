// number,square and cube 
#include<stdio.h>
int main()
{
    int i;

    printf("Number\tSquare\tCube\n");
    printf("your ans is=:\n");

    for(i=0; i<=50; i++)
        printf("%d\t%d\t%d\n", i, i*i, i*i*i); 
    
    return 0;
}