#include<stdio.h>

int main()
{
      double meter;
      double inch, feet;
      printf("Enter Meter value:\n");
      scanf("%lf\n",&meter);

      
     //feet = 3.28*meter;
     inch=12*meter;

     printf("The Value of 80 meter in inches is:%lf\n",inch);

     //printf("The Value of 80 meter in feet is:%lf\n",feet);

     return 0;
}