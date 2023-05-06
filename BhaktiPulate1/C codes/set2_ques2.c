#include<stdio.h>
int main()
{
     int abc, xyz;
     printf("Enter the value:\n");
     scanf("%d\n",&abc);
     scanf("%d\n",&xyz);

     if (abc>xyz)
     {
        printf("check if abc value is greater");
     }

     else
     {
        printf("check if xyz value is greater");
     }
     
    return 0;
}