#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];

    printf("Enter a string :");
    scanf("%s",str1);

    int len=strlen(str1)-1;
    int new_len=0;
    while (len>new_len)
    {
        if(str1[new_len++] !=str1[len--])
        {
        printf("%s is not palindrome \n ",str1);
         return 0;
        }
    }
    printf("%s is palindrome",str1);
return 0;
}