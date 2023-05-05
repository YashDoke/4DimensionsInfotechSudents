#include<stdio.h>
#include<string.h>
void main()
{
    char name[8]="umberella";
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(j==8)
            {
                name[j]='\0';
            }
            else if(name[i]>name[j])
            {
                printf("%C<%c\n",name[i],name[j]);
                continue;
            }
            else{
                printf("swapping :%c<%c\n",name[i],name[j]);

                char temp;
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    
        printf("%s",name);
}