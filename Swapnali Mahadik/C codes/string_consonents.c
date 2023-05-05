#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Hello ,have a good day";

    char new_str[50];
    int j=0;
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||
           str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
           {
           new_str[j]=str1[i];          
           j++;
           }
    }
     printf("consonents of string :%s\n",new_str);
    
    return 0;
}