#include<stdio.h>
#include<string.h>

int main()
{
    int n;
     
    printf("Enter the length:");
    scanf("%d",&n);
     
    
    char str1[n];
    printf("Enter the string:");
    for(int i=0; i<n; i++)
    {
        scanf("%c",&str1[n]);
    }

    for ( int i = 0; i <  n; i++)
    {
        printf("String is:%s\n",str1);
    }
    
}