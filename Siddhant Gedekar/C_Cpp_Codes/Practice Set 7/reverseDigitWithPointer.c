#include<stdio.h>

int reverse(int *n,int res){
    res = (*n%10+res);
    *n/=10;
    if(*n==0){
        return res;
    }
    res *=10;
    
    return reverse(n,res);
}

int main(){
    int a;
    printf("Enter a 5 digit number: ");
    scanf("%d",&a);
    int *ptr = &a;
    a = reverse(ptr,0);
    printf("Reverse of the given number is: %d",a);
    return 0;
}