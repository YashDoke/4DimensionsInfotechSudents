#include<stdio.h>

int main(){
    float cheld, cattend;
    printf("Enter classes held: ");
    scanf("%f",&cheld);
    printf("Enter classes attended: ");
    scanf("%f",&cattend);

    float percent = (cattend/cheld) * 100;

    if(percent<75){
        printf("(%.2f%%)Not allowed to sit in exam.",percent);
    }
    else{
        printf("(%.2f%%)Allowed to sit in exam.",percent);
    }
    return 0;
}