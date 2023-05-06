#include<stdio.h>
int OddEven(int number)
   {    
        int i;
        int j;
        int isprime;
        for(i=2;i<=number;i++)
        {   
            if(number%1==0)
            {
                isprime=1;
                if(isprime)
                {
                printf(" prime number:%d\n",i);
                }
            }
        }
    }
    int main()
    {
     OddEven(20);
        return 0;
    }
 
  