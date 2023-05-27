#include<stdio.h>
#include<string.h>

int main(){
    char array[] = {'a','b','c','d','e','f','g','h','i','j'};
    int array1[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<sizeof(array);i++){
        printf("Address of %c: %d\n",array[i],&array[i]);
    }
    int diff = (&array[0]-&array[1]);
    for(int i=0;i<sizeof(array1)/sizeof(int);i++){
        if(diff==array1[i]){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}