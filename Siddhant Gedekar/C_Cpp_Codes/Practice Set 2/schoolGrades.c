#include<stdio.h>

int main(){
    int a=81,b=60,c=50,d=45,e=25,f=24;
    float marks;
    printf("Enter your grade: ");

    scanf("%f",&marks);
    if(marks>=a){
        printf("Grade A");
    }
    else if(marks<=a && marks>=b){
        printf("Grade B");
    }
    else if(marks<=b && marks>=c){
        printf("Grade C");
    }
    else if(marks<=c && marks>=d){
        printf("Grade D");
    }
    else if(marks<=d && marks>=e){
        printf("Grade E");
    }
    else if(marks<=f && marks>=0){
        printf("Grade F");
    }
    else{
        printf("Invalid");
    }

    return 0;
}