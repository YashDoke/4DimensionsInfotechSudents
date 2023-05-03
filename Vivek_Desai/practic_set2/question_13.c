#include<stdio.h>


int main(){

    char gnd, m_sts;
    int age;

    printf("Enter your gender:");
    scanf("%c",&gnd);

    printf("Your Marital status:");
    scanf("%c",&m_sts);

    printf("\nEnter your age:");
    scanf("%d",&age);

    if(gnd == 'F' || gnd == 'f'){
        printf(" she will work only in urban areas");
    }

    else if((gnd == 'M' || gnd == 'm') && (age>=20 && age<=40)){
        printf("work in anywhere");
    }

    else if((gnd == 'M' || gnd == 'm') && (age>=40 && age<=60)){
        printf("he will work in urban areas only");
    }

    else{
        printf("ERRER");
    }

    return 0;
}