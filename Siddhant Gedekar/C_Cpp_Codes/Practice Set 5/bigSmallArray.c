#include<stdio.h>


// sorting array to easily get smallest and largest elements
int bubbleSort(int a[]){
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    bubbleSort(a);
    printf("Largest element is: %d\nSmallest element is: %d",a[9],a[0]);
    return 0;
}