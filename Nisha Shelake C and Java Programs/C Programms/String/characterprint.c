#include<stdio.h>
#include<string.h>
int main()
{
    char arr[20];
    int i;
    printf("enter a string:\n");
    for(i=0;i<20;i++)
    {
        scanf("%s",&arr[i]);
    }
    printf("diaplay the character:\n");
    for(i=0;i<20;i++)
    {
        printf("%c\n",arr);
    }
    printf("%d",strlen(arr));

}
