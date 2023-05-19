#include<stdio.h>
int isprime(int start,int end){
    for(int i = start; i<=end;i++){
        int check = 1;
        for(int j = 2;j<=i/2;j++){
            if(i%j == 0){
                check = 0;
            }
        }
        if(check == 1){
            printf("%d\n",i);
        }
    }
    return 0;
}

int main(){
    int start, end;

    printf("Enetr the start intervl: ");
    scanf("%d",&start);
    printf("Enetr the End intervl: ");
    scanf("%d",&end);

    isprime(start,end);


    return 0;
}