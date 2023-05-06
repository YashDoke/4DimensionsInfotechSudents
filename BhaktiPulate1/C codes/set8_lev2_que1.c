#include<stdio.h>
#include<string.h>

int main()
{
    int x;
    
    printf("Enter the length:\n");
    scanf("%d",&x);

    char str[x];
    printf("Enter the string:");
    for ( int  i = 0; i < x; i++)
    {
        scanf("%c",&str[i]);
        
    }
    printf("String is:%s",str);
    

}