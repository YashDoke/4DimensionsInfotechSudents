#include<stdio.h>
#include<string.h>
int main()
{
    char str[]={"swapnali"};
    int i=0;
    //char *ptr;
    //ptr = &i;
    printf("%s\n",str);
    printf("length of string is:%d\n",strlen(str));
    for(i=0;i<strlen(str);i++)
    {
        printf("%c ",str[i]);
    }

}