#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="Hello,have good day";
    char str2[100];
    int i=0;
    int j=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
             str[i]=='A'|| str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
             {
                //printf("%c\n",str[i]);
                str2[j]=str[i];
                j++;
             }
    }
    printf("consonent string is : %s\n",str2);
    
}