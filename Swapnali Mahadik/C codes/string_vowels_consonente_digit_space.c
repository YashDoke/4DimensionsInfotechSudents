#include<stdio.h>
#include<string.h>
int main()
{
    int vowels=0,consonant=0,digit=0,space=0;
    char str1[]="Hello ,have a good day 123456";
    char new_str[50];
    
    int j=0;
    for(int i=0;i<strlen(str1);i++)
    {
        if((str1[i]>'a' && str1[i] <='z')||(str1[i] >'A' && str1[i] <='Z'))
        {
            new_str[j]=str1[i];

            if(str1[i]=='a' ||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||
                str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
                {

                    vowels++;
                }
            else
                {
                    consonant++;
                }
        }
            else if(str1[i] >='0' && str1[i] <='9')
                {
                    digit++;
                }
            else
                {
                space++;
                }
    }

    printf("Vowels :%d\n",vowels);
    printf("Consonent :%d\n",consonant);
    printf("Digit %d\n",digit);
    printf("Space :%d",space);
    
    return 0;
}