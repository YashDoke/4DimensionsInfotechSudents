#include<stdio.h>

int main(){

    int a,b;
    printf("Enter the Value of A and B: ");
    scanf("%d %d",&a,&b);

    //use logical operation
    printf("check Condition: %d\n",a<50 && a<b);        //and operation

    // questions 6 

    printf("check Condition: %d",a<50 || a<b);          //or operation

    return 0;
}