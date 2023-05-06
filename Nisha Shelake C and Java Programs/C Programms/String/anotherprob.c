#include<stdio.h>
#include<string.h>
void main()
{
    char line[]="this id orange juice";
    char word[]="orange";
    char result;
    result=strstr(line,word);
    if(result !=NULL)
    {
        printf("orange is present");
    }
    else
    {
        printf("orange is not present ");
    }
}