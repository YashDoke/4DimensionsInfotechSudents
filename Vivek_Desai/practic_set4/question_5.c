#include<stdio.h>

int fibonacci(int limit){
    int num1 = 0;
    int num2 = 1;
    int sum = 0;

    while (sum<=limit)
    {
        printf("%d,",sum);
        sum = num1 + num2;

        num1 =num2;
        num2 = sum;
    }
    
return 0;
}

int main(){

    int limit;
    printf("Enter the range of fibonacci: ");
    scanf("%d",&limit);

    fibonacci(limit);

    return 0;
}