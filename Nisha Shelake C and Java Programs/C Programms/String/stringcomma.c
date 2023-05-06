#include<stdio.h>
#include<string.h>
void main()
{
    char line[]="Hello world";
    char word1[]="world";
   
    char*result1;
    
    int len_word1=strlen(word1);
   
    result1=strstr(line ,word1);
   
    
    for(int i=0;i<strlen(line);i++)
    {
        if(line[i]==' ')
        {
            line[i]=',';
        }
    }
    while((result1=strstr(line ,word1))!=NULL) 
    {
        memmove(result1+1,result1+len_word1,strlen(result1+len_word1)+1);
    }
     
    printf("%s\n",line);

}