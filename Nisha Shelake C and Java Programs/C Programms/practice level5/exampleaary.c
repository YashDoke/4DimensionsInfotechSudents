#include<stdio.h>
int main()
{
    int age[]={2,3,15,15,3,6} ;
    int age1[]={2,3,15,15,3,6};
    int i;
   // int index=0;
    //printf("enter a array\n");
    for(i=0;i<6;i++)
    {
        printf("%d \n",age[i]);
    }
    printf("reversed array is :\n");
    int index=0;
    for(i=5;i>=0;i--)
    {
       // printf("%d ",age1[i]);
       age1[index] = age[i];
       index++;
    }
    for(int i=0;i<6;i++)
    {
        printf("%d \n",age1[i]);
    }
    int index1=5;
    for(int i=5;i>=0;i--)
    {
    if(age[i]==age1[index])
    {
        printf("given array is similar:");
        break;
    }
    else
    {
        printf("given array is not similar:");
        break;
    }
   
    index--;
    }
    return 0;
}