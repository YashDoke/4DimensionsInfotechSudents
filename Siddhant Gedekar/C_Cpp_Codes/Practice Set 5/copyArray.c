#include<stdio.h>


int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int a1[10],j=0;
    printf("starting\n");
    // reverseArray(a);
    for(int i=9;i>=0;i--){
        a1[i]=a[j];
        j++;
    }
    for(int i=0;i<10;i++){
        printf("%d ",a1[i]);
    }
    return 0;
}