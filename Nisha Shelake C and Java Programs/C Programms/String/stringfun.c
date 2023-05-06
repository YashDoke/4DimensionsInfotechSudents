#include<stdio.h>
#include<string.h>
void main()
{
    char str[]={"hello"};
    char str1[]={"world"};
    char str3[5];
   // printf("%s\n",str);
   // printf("%s\n",str1);
   // printf("%d\n",strlen(str));
   // printf("%d\n",strlen(str1));
    //strcpy(str3,str);
    //printf("%s",str3);
    //printf("%s\n",strupr(str));
    //printf("%s\n",strupr(str1));
   // printf("%s",strrev(str));
    // printf("%d",strcmp(str,str1));
    if(strcmp(str,str1)==0)
    {
        printf("Equal\n");
   }
    else
    {
       printf("Not Equal\n");
    }
    printf("%s\n",strcat(str,str1));

    int n;
    printf("enter a size of characters:\n");
    scanf("%c",&n);
    printf("strings\n");
    //char name[n];
    //char name2[n];
    scanf("%s",&n);
    
    
}