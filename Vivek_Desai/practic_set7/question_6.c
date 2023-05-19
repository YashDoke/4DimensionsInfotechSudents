#include<stdio.h>

int main(){
    int a = 10, b = 34 , c = 9;

    int min, max;

    int *aPtr = &a;
    int *bPtr = &b;
    int *cPtr = &c;

    if(*aPtr > *bPtr && *aPtr > *cPtr){
        max = *aPtr;
    }
    else if(*aPtr < *bPtr && *bPtr > *cPtr){
        max = *bPtr;
    }
    else{
        max = *cPtr;
    }

    if(*aPtr < *bPtr && *aPtr < *cPtr){
        min = *aPtr;
    }
    else if(*aPtr > *bPtr && *bPtr < *cPtr){
        min = *bPtr;
    }
    else{
        min  = *cPtr;
    }


    printf("Greatest Value: %d\n",max);
    printf("Smalest Value: %d\n",min);





    return 0;
}