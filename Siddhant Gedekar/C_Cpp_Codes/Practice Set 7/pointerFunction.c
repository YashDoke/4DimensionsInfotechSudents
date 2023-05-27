#include<stdio.h>

void pointer(int *ptr){
    printf("Returned pointer is: %d\n",*ptr);
}

int *pointer0(int *ptr1,int *ptr2,int *ptr3){
    if(*ptr1>*ptr2 && *ptr1>*ptr3){
        return ptr1;
    }
    else if(*ptr2>*ptr1 && *ptr2>*ptr3){
        return ptr2;
    }
    else{
        return ptr3;
    }
    return 0;
}

int *pointer1(int *ptr1,int *ptr2,int *ptr3){
    if(*ptr1<*ptr2 && *ptr1<*ptr3){
        return ptr1;
    }
    else if(*ptr2<*ptr1 && *ptr2<*ptr3){
        return ptr2;
    }
    else{
        return ptr3;
    }
    return 0;
}

int main(){
    int a=8,b=10,c=5;

    int *ptr=&a;
    pointer(ptr);
    
    ptr = pointer0(&a,&b,&c);
    printf("\nAfter comparison between(%d, %d, %d): %d is the largest.",a,b,c,*ptr);
    ptr = pointer1(&a,&b,&c);
    printf("\nAfter comparison between(%d, %d, %d): %d is the smallest.",a,b,c,*ptr);
    return 0;
}