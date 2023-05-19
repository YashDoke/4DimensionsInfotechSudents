#include<stdio.h>
int table(int num){
    for(int i=1;i<=10;i++){
        int x = i*num;
        printf("%d  %d\n",i,x);
    }
    return 0;
}

int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    table(num);



    return 0;
}