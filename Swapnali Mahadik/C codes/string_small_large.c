#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="This is an umbrella";
    char smallest[20]="", largest[20]="", word[20]="";
    int i,len,j=0;

    len=strlen(str);

    for(i=0;i<=len;i++)
    {
        if(str[i]==' '|| str[i]=='\0')
        {
            word[j]='\0';

            if(strlen(word)>strlen(largest))
            {
                strcpy(largest,word);
            }
            if(strlen(word)<strlen(smallest) || strlen(smallest)==0)
            {
                strcpy(smallest,word);
            }
            j=0;
            
        }
        
        else{
            word[j++]=str[i];
        }
    }

    printf("largest word of string : %s\n",largest);    
    printf(" smallest word string : %s\n",smallest);


    return 0;
}  