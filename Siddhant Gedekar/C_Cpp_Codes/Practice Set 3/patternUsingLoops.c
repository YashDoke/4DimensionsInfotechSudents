#include<stdio.h>

int main(){
    char a = '*';
    char b = ' ';
    for(int j=0;j<5;j++){
    for(int i=0;i<j;i++){
        printf("%c",a);
    }
    printf("\n");
    }

    printf("\n");
    // printing 0 and 1 in reversed vertical pyramid
    for (int i=7;i>0;i--){
        for(int k=0;k<7-i;k++){
            printf(" ");
        }
        for(int j=i;j>=7-i-1;j--){
            // if(j%2==1){
            //     printf("%d",1);
            // }
            // else{
            //     printf("%d",0);
            // }
            printf("*");
        }
        printf("\n");
    }
    
    // printing a right sided vertical pyramid
    for(int i=0;i<6;i++){
        for(int j=1;j<6-i;j++){
            printf(" ");
        }
        for(int j=0;j<2*i-1;j++){
            // if(j%2==1){
            //     printf("%d",1);
            // }
            // else{
            //     printf("%d",0);
            // }
            printf("*");
        }printf("\n");
    }
    printf("\n");
    int row = 10;

    for(int i=0;i<row;i++){
        // Left sided triangle        
        for(int j=i;j<row;j++){
            printf("* ");
        }

        // Central triangle
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=0;j<i;j++){
            printf("  ");
        }

        // Right sided triangle
        for(int j=row;j>i;j--){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<row;i++){
        // Left sided triangle        
        for(int j=0;j<i+1;j++){
            printf("* ");
        }

        // Central triangle
        for(int j=row;j>i+1;j--){
            printf("  ");
        }
        for(int j=row;j>i+1;j--){
            printf("  ");
        }

        // Right sided triangle
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");

    // for(int i=1;i<row;i++){
    //     if(i == row/2){
    //         printf("0");
    //     }
    //     else{
    //         printf("*");
    //     }
    // }
    return 0;
}