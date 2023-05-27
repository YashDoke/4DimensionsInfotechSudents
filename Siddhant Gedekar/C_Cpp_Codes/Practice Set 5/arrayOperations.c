/*Write a program to print
sum, average of all numbers, smallest and largest element
of an array. */
#include<stdio.h>

void avg(int a[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum += a[i];
    }
    printf("Average of array elements is: %d\nSum of array elements is: %d\n",sum/size,sum);
}

void comparison(int a[],int size){
    int max, min,i;
    for(i=0;i<size;i++){
        max = a[i];
        for(int j=i;j<size;j++){
            if(a[i]>max){
                max = a[i];
            }
            // if(a[i]<min){
            //     min = a[i];
            // }
        }
    }
    min = a[i];
    for(i=0;i<size;i++){
        max = a[i];
        for(int j=i;j<size;j++){
            if(a[i]<min){
                min = a[i];
            }
        }
    }
    for(int i=0;i<9;i++){
        if(max==a[i]){
            printf("Largest element is: %d\n",max);
        }
        if(min==a[i]){
            printf("Smallest element is: %d\n",min);
        }
    }
}

int main(){
    int array[] = {1,11,23,43,46,63,27,90,59};
    int size = sizeof(array)/sizeof(int);
    comparison(array,size);
    avg(array,size);
    // sort(array);
    // for(int i=0;i<sizeof(array)/sizeof(int);i++){
    //     printf("%d ",array[i]);
    // }
    return 0;
}