#include<stdio.h>
#include<string.h>
void main()

{   /*
    char name[]="hello my name is Nisha";
    char name[10];
    for(int i=0;i<11;i++)
    {
        scanf("%c",&name[i]);
        printf("%d",strlen(name));
    }
    int count=0;
    int i=0;
    while (1)
    {
        if(name[i]=='\0');
        break;
    }
    count++;
    i++;


    printf("%d",count);
    */
    char str[]="hello Nisha";
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            printf("space is present at %d index",i);
            break;
        }
    }
}