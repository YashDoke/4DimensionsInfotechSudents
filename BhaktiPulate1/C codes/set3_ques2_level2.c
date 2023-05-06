#include<stdio.h>

int main()
{
    int i;
    printf("Enter the number:\n");
    //scanf("%d\n",&i);

    for(i=0; i<=255;i++){
        printf("ASCII value %d is '%c'\n",i,i);
    }
    return 0;
}