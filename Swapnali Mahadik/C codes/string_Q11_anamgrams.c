#include<stdio.h>
#include<string.h>
char anagram(char str1[9],int len1)
{
 for(int i=0;i<len1;i++)
    {
        for(int j=i+1;j<len1+1;j++)
        {
            if(j==len1)
            {
                str1[j]='\0';
            }
            else if(str1[i]<str1[j])
                {
                    //printf("%C<%c\n",str1[i],str1[j]);
                    continue;
                }
                else
                {
                    //printf("swapping :%c<%c\n",str1[i],str1[j]);

                    char temp;
                    temp=str1[i];
                    str1[i]=str1[j];
                    str1[j]=temp;
                }
        }
    }
    
    
        //printf("%s",str1);
        return str1[9];


}
int main()
{
    char str1[100]="abcd";
    char str2[]="ajax";

    int len1=strlen(str1);
    int len2=strlen(str2);

    if(len1!=len2)
    {
        printf("length are not same");
    }
    else 
    {
        anagram(str1,len1);
        anagram(str2,len2);
        if(strcmp(str1,str2)==0)
        {
            printf("String are anagram");

        }
        else
        {
            printf("String are not anagram");
        }

    }
}
