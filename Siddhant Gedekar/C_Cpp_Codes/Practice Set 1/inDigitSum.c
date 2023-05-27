#include<stdio.h>

// print sum of 1st and 2nd digit from the number

int main(){
    int n,res=0;
    printf("Enter 5 digit number: ");
    scanf("%d",&n);

    res += (n/1000)%10;
    n/=10;
    res += (n/1000)%10;
    
    printf("Value is: %d",res);
    return 0;
}