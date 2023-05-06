#include<stdio.h>



    int OddEven(int num)
    {
        if(num%2==0)
        {
            printf("given number is Even :%d",num);
        }
        else
        {
            printf("given number is odd :%d",num);

        }
    }
   int main()
   {
    OddEven(4);
    return 0;
   }