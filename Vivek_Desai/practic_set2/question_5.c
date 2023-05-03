#include<stdio.h>

int main(){
    int m;

    printf("Enter Student Marks:");
    scanf("%d",&m);

    if(m<25){
        printf("F");
    }
    else if(m>25 && m<45){
        printf("E");
    }

     else if(m>45 && m<50){
        printf("D");
    }

     else if(m>50 && m<60){
        printf("C");
    }

     else if(m>60 && m<80){
        printf("B");
    }
    else{
        printf("A");
    }

    return 0;
}