#include<stdio.h>

int main(){
    int age;
    char sex,maritalStats;
    printf("Enter age, sex(m or f), marital status(y or n): ");
    scanf("%d %s %s",&age,&sex,&maritalStats);

    if(sex=='f'){
        printf("Work only in urban area.");
    }
    else if(sex=='m' && age>=20 && age<=40){
        printf("Work anywhere.");
    }
    else if(sex=='m' && age>=40 && age<=60){
        printf("Work only in urban area.");
    }
    else{
        printf("Error");
    }
    return 0;
}