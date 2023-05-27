#include<stdio.h>

// Input array elements
// cicular shift a single element of array
int main(){
    // take array input
    int n=0;
    int array[100];
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter values: ");
    
    // Taking array input
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    // Taking number of shifts to perform
    printf("Enter number of shifts: ");
    int shift;
    scanf("%d",&shift);

    // Shifting array values
    for(int i=0;i<shift;i++){
        for(int j=0;j<n;j++){
            int temp = array[0];
            array[0] = array[j];
            array[j] = temp;
        }
    }

    // Printing array values
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }

    return 0;
}