#include<stdio.h>
#include<string.h>

char anagram(char str[9], int len){
  for ( int i = 0; i < len+1; i++)
  {
    for ( int j = 0; j < len; i++)
    {
        if ( j==len)
        {
            str[j]='\0';
        }
        else if ( str[i]<str[j])
        {
            continue;
        }
        else{
            char temp;
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        
    }
    
  }
  return str[9];
  
}

int main()
{
    char name1="ajax";
    char name2="jaxa";
    int len1=strlen(name1);
    int len2=strlen(name2);

    if ( len1!=len2)
    {
        printf("Not anagram");
    }
    else{
        anagram(name1,len1);
        anagram(name2,len2);
    }
    if ( strcmp(name1,name2)==0)
    {
        printf("String are anagram");
    }
    else{
        printf("String are not anagram");
    }
    
    return 0;
}