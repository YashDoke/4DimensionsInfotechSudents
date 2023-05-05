#include<stdio.h>
int main()
{
    int first,second,third,n,result1,result2,result3,add;
    printf("Enter a number :");
    scanf("%d",&n);

    first=n/100;
    n=n%100;
    result1=first*first*first;
    printf(" first no %d\n",result1);

    second=n/10;
    n=n%10;
    result2=second*second*second;
    printf(" second no %d\n",result2);

    
    result3=n*n*n;
    printf(" third no %d\n",result3);

    add=result1 +result2 +result3;

    printf("Armstrong number %d\n",add);

    return 0;
}