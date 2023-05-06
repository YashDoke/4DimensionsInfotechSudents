#include<stdio.h>
#include<string.h>
void main()
{
    char name[10];
    char name2[10];
    printf("enter a name\n");
    scanf("%s",&name);
    int end=name-1;
    for(int i=0;i<strlen(name);i++)
    {
        name[2]=name[end];
        end--;
    }
    name2[i]='\0';

    printf("%s\n",name2);
}