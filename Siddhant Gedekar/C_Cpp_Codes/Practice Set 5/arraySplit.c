/*
1. Array with unique elements
2. Find difference between largest and 2nd largest
3. New array with 2nd largest and difference of largest and 2nd largest elements
   and rest of the elements.
*/
#include<stdio.h>


int main(){
    int a[20];// = {2,5,9,3,6};
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    // iterate untill n
    printf("\nEnter array values: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    // int array[20];
    int maxIndex=0, secondMaxIndex=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[maxIndex]){
            maxIndex = i;
        }
    }

    //printf("%d ",a[maxIndex]);

    for(int i=0;i<n;i++){
        if(i!=maxIndex && a[i]>a[secondMaxIndex]){
            secondMaxIndex = i;
        }
    }

    // printf("%d ",a[secondMaxIndex]);

    int diff = a[maxIndex] - a[secondMaxIndex];

    for(int i=0;i<n;i++){
        if(i==maxIndex){
            printf("%d %d ",a[secondMaxIndex],diff);
        }
        else{
            printf("%d ",a[i]);
        }
    }
    // printf("Difference %d\n",diff);
    // for(int i=0;i<n;i++){
    //     printf("%d ",a[i]);
    // }
    return 0;
}