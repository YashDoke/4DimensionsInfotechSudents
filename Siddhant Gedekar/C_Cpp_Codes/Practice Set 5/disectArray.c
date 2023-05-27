#include<stdio.h>

void signOfNumbers(int a[],int i){
    while(i<20){
        if(a[i]>0){
            printf("%d  is positive number.\n",a[i]);
        }
        else if(a[i]<0){
            printf("%d is negative number.\n",a[i]);
        }
        else{
            printf("%d is neutral number.\n",a[i]);
        }
        i++;
    }
}

void oddEvenNumber(int a[], int i){
    while(i<20){
        if(a[i]%2==0 && a[i]<0){
            printf("%d is negative even number.\n",a[i]);
        }
        else if(a[i]%2==1 && a[i]<0){
            printf("%d is negative odd number\n",a[i]);
        }
        else if(a[i]%2==0 && a[i]>0){
            printf("%d  is positive even number.\n",a[i]);
        }
        else if(a[i]%2==1 && a[i]>0){
            printf("%d  is positive odd number.\n",a[i]);
        }
        else{
            printf("%d is neutral number.\n",a[i]);
        }
        i++;
    }
}

// void array(int a[],int i){
//     // if(a[i]>0){
//     //     printf("%d is positive number.\n",a[i]);
//     //     array(a,i+1);
//     // }
//     // else if(a[i]<0){
//     //     printf("%d is negative number.\n",a[i]);
//     //     array(a,i+1);
//     // }
//     if(a[i]%2==0 && a[i]>0){
//         printf("%d is positive even number.\n",a[i]);
//         array(a,i+1);
//     }
//     if(a[i]%2==0 && a[i]<0){
//         printf("%d is negative even number.\n",a[i]);
//         array(a,i+1);
//     }
//     if(a[i]%2==1 && a[i]>0){
//         printf("%d is positive odd number.\n",a[i]);
//         array(a,i+1);
//     }
//     if(a[i]%2==1 && a[i]<0){
//         printf("%d is negative odd number.\n",a[i]);
//         array(a,i+1);
//     }
//     if(a[i]==0){
//         printf("Number is %d\n",a[i]);
//     }
//     else{
//         printf("Array finished.");
//     }
// }

int main(){

    int arr[20]={1,-1,2,-2,3,-3,4,-4,5,-5,6,-6,7,-7,8,-8,9,-9,10,-10};
    // printf("Enter array elements: \n");
    // for(int i=0;i<20;i++){
    //     scanf("%d",&arr[i]);
    // }
    // array(arr,0);
    signOfNumbers(arr,0);
    oddEvenNumber(arr,0);

    return 0;
}