#include<stdio.h>

int digits(int n){
    // int n;
    // printf("Enter a Number: ");
    // scanf("%d",&n);
    int result = 1;
    for(int i=0;n/10>0;i++){
        result +=1;
        n = n/10;
    }

    return result;
}

int factorial(int n){
    // int n;
    // printf("Enter a Number: ");
    // scanf("%d",&n);
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

void StrongNumber(int num){
    // int num;
    // printf("Enter a Number: ");
    // scanf("%d",&num);
    
    int temp = num;
    int Strong = 0;
    for (int i = 0; i <digits(num) ; i++)
    {
        int a = temp%10;
        temp = temp/10;
        Strong = Strong + factorial(a);
    }

    if(num==Strong){
    printf("Yes it is Strong Number");
    }
    else{
        printf("Yes it is Not a Strong Number");
    }
}

int main(){


// digits(13)
// printf("%d",factorial(2));

for(int i=10;i>0;){
int choice;
int num;
printf("Enter a Number: ");
scanf("%d",&num);
printf("\n");
printf("Enter Your Choice\n1)Find Number of Digits\n2)Find Factorial\n3)Check Number is Strong or Not\n");
scanf("%d",&choice);



switch (choice)
{
case 1:
    printf("%d \n",digits(num));
    break;
case 2:
    printf("%d \n",factorial(num));
    break;
case 3:
    StrongNumber(num);
    break;
default:
    break;
}


// int num;
// printf("Enter a Number: ");
// scanf("%d",&num);
// StrongNumber(num);
// printf("\n");
}


// printf("%d",StrongNumber(145));

return 0;
}