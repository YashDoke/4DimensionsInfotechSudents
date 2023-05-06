
#include<stdio.h>
#include<string.h>

void main()
{
    char line[]="Hello, have a $ @ good day 123";
    int vowels=0, consonants=0, digits=0, spaces=0, symbols=0;
    
    

    for(int i=0;i<strlen(line);i++)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' ||
        line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
        {
            vowels ++;
        }

        else if(((line[i]>'a'&& line[i]<='z') || (line[i]>'A'&& line[i]<='Z')))
        {
            consonants ++;
        }
        else if(line[i]>='0' || line[i]>='9')
        {
            digits ++;
        }
        else if(line[i]==' ')
        {
            spaces ++;
        }
        else
        {
            symbols ++;
        }

    }
    
    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nSpace: %d",spaces);
    printf("\nSymbol: %d",symbols);
    }