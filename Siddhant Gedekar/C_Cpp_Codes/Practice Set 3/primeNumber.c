#include<stdio.h>

int main(){
    int countCheck=0;

    for(int i=2;i<=100;i++){
        for(int j=2;j<=i;j++){
            if(i%j==0){
                countCheck++;
            }
        }
        if(countCheck>1){
            countCheck=0;
        }
        else{
            printf("%d is prime number.\n",i);
        }
    }
    return 0;
}