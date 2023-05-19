// #include<stdio.h>

// int main(){
// //     int num = 55, r = 0;
// //     int temp = num;
// //     int a;
// //     int sum = 0;
// //     int mult = 1;

// //     for(int i=0;num%10>0;i++){
// //         r += 1;
// //         num = num/10;
// //     }

// //     for(int i = 0;i<r;i++){
// //         mult = temp%10;
// //         for(int i = 0;i<r;i++){
// //             mult *=r;
// //             
          
// //         }
//             // sum += mult;
// //         mult = 0;
// //         temp = temp/10;
        
// //     }

// //     printf("%d",sum);

// //     // printf("R = %d",r);

// // /////////////////////

// printf("%d",1/10);
//     // int num = 124;
//     // int a = 0;
//     // int temp;
//     // int sum = 0,mult = 1;
//     // for(int i = 1;i<num%10 ;i++){
//     //     temp = num%10;
//     //     for(int j = 1; j<=temp;j++){
//     //         mult *= i;
//     //     }
//     //     sum += mult;
//     //     mult = 1;
//     // }


    
    

//     // printf("%d",sum);
//     return 0;
// }

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
    printf("Yes it is Strong Number\n");
    }
    else{
        printf("Yes it is Not a Strong Number\n");
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