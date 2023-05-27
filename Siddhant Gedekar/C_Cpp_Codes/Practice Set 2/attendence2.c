#include<stdio.h>

int main(){
    float cheld, cattend;
    char cause;
    printf("Enter classes held: ");
    scanf("%f",&cheld);
    printf("Enter classes attended: ");
    scanf("%f",&cattend);
    printf("Did you had medical cause(y-1/n-0): ");
    scanf("%s",&cause);

    float percent = (cattend/cheld) * 100;

    if(percent<75 && cause != 'y'){
        printf("(%.2f%%)Not allowed to sit in exam.",percent);
    }
    else if(cause == 'y'){
        printf("Allowed to sit due to medical cause.");
    }
    else{
        printf("(%.2f%%)Allowed to sit in exam.",percent);
    }
    return 0;
}