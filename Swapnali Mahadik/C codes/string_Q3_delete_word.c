#include<stdio.h>
#include<string.h>
int main()
{
 char str1[]="This is the lion in the cage";
 char str2[]="the";
 int word=0;
 int len=strlen(str1);
 int len2=strlen(str2);
 for(int i=0;i<len;i++)
 {
    int temp=i;
    for(int j=0;j<len2;j++)
    {
        if((str1[i]==str2[j]))
        i++;
    }
    word=i-temp;
    if(word==len2)
    {
        i=temp;
        for(int j=i;j<len-len2;j++)
        {
            str1[j]=str1[j+len2];
           len= len-len2;
           str1[j]='\0';

        }
    }
 }
 printf("New string :%s\n",str1);
    return 0;
}