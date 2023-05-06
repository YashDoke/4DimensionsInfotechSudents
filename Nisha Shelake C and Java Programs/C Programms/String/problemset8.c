#include<stdio.h>
#include<string.h>
void main()
{
    char line[]="this is orange juice orange";
    char word[]="orange";
    char*result;
    int len_word=strlen(word);
    result=strstr(line ,word);
    while((result=strstr(line ,word))!=NULL)
    {
        memmove(--result,result+len_word,strlen(result+len_word)+1);
    }
    printf("%s\n",line);
    printf("%d",strlen(line));
}