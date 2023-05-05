#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100];
    char str2[100];
    
 printf("Enter a string :");
 scanf("%s",&str1);
int j=0;

int len=strlen(str1);

// for(int i=0;i<len/2;i++)
// {
//     int temp;
//     temp=str1[i];
//     str1[i]=str1[len-i-1];
//     str1[len-i-1]=temp;
// }
 for(int i=len-1;i>=0;i--)
 {
    str2[j]=str1[i];
    j++;
    if(j==len)
    {
      str2[j]='\0';
      break;
    }
 } 
    printf("%s",str2);
 
 
 

}