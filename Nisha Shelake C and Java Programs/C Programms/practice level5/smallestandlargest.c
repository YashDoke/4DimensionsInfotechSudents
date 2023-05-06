#include<stdio.h>
int main()
{
    int age [5];
    int i;
    int small;
    //=age[0];
    int large;
    //=age[0];
    printf("enter array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&age[i]);

    }
     small=age[0];
     large=age[0];
     
    for(i=0;i<5;i++)
    {
       if(age[i]<small)
       {
        small =age[i];
       
       }
       else if(age[i]>large)
       {
        large =age[i];
        //printf("largest no is %d",large);
       }

    }
    printf("largest no is %d\n",large);
    printf("smallest no is %d\n",small);
    return 0;
    
}