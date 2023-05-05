#include<stdio.h>
#include<string.h>
int main()
{
    char friends[10][20]={

        "Swapnali",
        "Nisha",
        "Bhakti",
        "Anuja",
        "Mayur",
        "Dhananjay",
        "Karan",
        "Shubham",
        "Akshay",
        "Ravi",
        
    };
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(friends[i],friends[j])>0)
            {
                char temp[20];

                strcpy(temp,friends[i]);
                strcpy(friends[i],friends[j]);
                strcpy(friends[j],temp);
            }
        }
    }

    printf("Sorted friends :\n");
    for(int i=0;i<10;i++)
    {
        printf("%s\n",friends[i]);
    }
    return 0;
}