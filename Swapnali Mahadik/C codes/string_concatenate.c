#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Hello";
    char str2[]="world";
    char new_str[100];
    char new_str1[100];

    // printf("%d\n",strlen(str1));
    // printf("%d",strlen(str2));

    int len=strlen(str1)+strlen(str2);
    int j= 0;

    for(int i=0;i<len;i++)
    {
                if(i<strlen(str1))
                {
                    new_str[i]=str1[i];
                }
            
        else if(i>=strlen(str1))
        {
            new_str[i]=str2[j];
            j++;
            if(j==strlen(str2))
            {
                new_str[i+1]='\0';
            }
        }
            
    }

    printf("%s",new_str);
    
    return 0;
}