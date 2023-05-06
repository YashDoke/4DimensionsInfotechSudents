#include<stdio.h>

int main ()
{
    int x , result, Firstdigit, Seconddigit,thirddigit,fourthdigit,fifthdigit;
     printf("Enter a  digit number\n");
    scanf("%d",&x);
    //x= 23586;
    
    Firstdigit = x/10000;   //first digit
    x=x%10000;

    Seconddigit = x/1000;   //second digit
    x=x%1000;

    thirddigit = x/100;   //third digit
    x=x%100;

    fourthdigit = x/10;   //fourth digit
    fifthdigit = x%10;   //fifth digit
     
    result = Firstdigit + Seconddigit;
    printf("Sum of Firstdigit and SecondLastdigit is:%d\n", result);
    return 0;
}