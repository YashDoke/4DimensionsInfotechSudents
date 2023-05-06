#include<stdio.h>
#include<string.h>
void main()
{
    char str1[]="Hello";
    char str2[]="World";
    char str3[100];
    int j=0;
    int len =strlen(str1)+strlen(str2);
    for(int i=0;i<len;i++)
    {
      if(i<strlen(str1))
      {
        str3[i]=str1[i];
      }
  
    else if(i>=strlen(str1)) 
    {
        str3[i]=str2[j];
        j++;
        if(j==strlen(str2))
      {
        str3[i+1]='\0';
      }
    }
  }
    printf("%s",str3);
   
}