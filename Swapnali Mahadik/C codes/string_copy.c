#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="hello";
    char str2[10];
    
    strcpy(str2,str1);
    printf("string copy :%s",str2);
 
    return 0;
}