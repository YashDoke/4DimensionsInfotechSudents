#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="This is Umbrella";
    int i=0;
    for(i=0;i<sizeof(str);i++)
    {
        if(str[i]=='e')
        {
            printf(" e is present at %d index",i);
        }
         if(str[i]==' '){
            if(str[i+1]=='i') {
                   if(str[i+2]=='s')
                   {
                      if(str[i+2]=='s')
                      {
                            if(str[i+3]==' ')
                            {
                                printf("string is present at %d index  \n",i);
                            }
                      }
                   }
            }
            
            
         }
       
    
        
        
       
    }
}