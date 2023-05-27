#include<stdio.h>

int main(){
    int tabNumber;
    int number;
    printf("How many tables you want?\n");
    scanf("%d",&tabNumber);
    for(int i=0;i<tabNumber;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&number);
        for(int j=1;j<=10;j++){
            printf("%d * %d = %d\n",number,j,number*j);
        }printf("\n");
    }
    return 0;
}