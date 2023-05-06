#include<stdio.h>

int main()
{
    int i;
     
    printf("Enter the Number:\n");
    scanf("%d\n",&i);
    int *j;
    j=&i;
    
    printf("%d\n",*j);

    return 0;
}