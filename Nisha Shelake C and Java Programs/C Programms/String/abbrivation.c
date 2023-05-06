#include<stdio.h>
#include<string.h>
void main()
{
    char line[]="Robert Brett Roser";
    char word1[]="Robert";
    char word2[]="Brett";
    char*result1;
    char*result2;
    int len_word1=strlen(word1);
    int len_word2=strlen(word2);
    result1=strstr(line ,word1);
    result2=strstr(line ,word2);
    
    for(int i=0;i<strlen(line);i++)
    {
        if(line[i]==' ')
        {
            line[i]='.';
        }
    }
    while((result1=strstr(line ,word1))!=NULL) 
    {
        memmove(result1+1,result1+len_word1,strlen(result1+len_word1)+1);
    }
     while((result2=strstr(line ,word2))!=NULL) 
    {
        memmove(result2+1,result2+len_word2,strlen(result2+len_word2)+1);
    }
    printf("%s\n",line);
    // printf("%d",strlen(line));
   // printf("%c.%c.%s",line[0],line[7],line);
}