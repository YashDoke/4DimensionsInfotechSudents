#include<stdio.h>

int main(){
    int num = 8208, r = 1;
    int last = num;
    int temp = num;
    int a;
    int sum = 0;
    int mult = 1;

    for(int i=0;num/10>0;i++){
        r += 1;
        num = num/10;
    }

    for(int i = 0;i<r;i++){
        mult = temp%10;
        a = mult;
        for(int i = 1;i<r;i++){
            mult *=a; 
        }
        sum += mult;
        mult = 0;
        temp = temp/10;
        
    }

    printf("%d\n",sum);
    if(sum==last){
        printf("Its An Armstrong Number");
    }else{
        printf("Not an Armstrong Number");
    }

    return 0;
}