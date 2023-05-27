#include<stdio.h>

int printArr(int a[],int s,int size){
    if(s==size){
        return 0;
    }
    printf("%d ",a[s]);
    printArr(a,s+1,size);
}

int main(){
    // Declearing and initialization of arrays
    int a[]={1,2,3,4,5,6,7,8,9,0}; // One Dimensional Array
    int a2[3][3]={{1,4,7},{2,5,8},{3,6,9}}; // Two Dimensional Array
    int a3[3][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},{{11,12,13},{14,15,16},{17,18,19}},{{21,22,23},{24,25,26},{27,28,29}}}; // Three Dimensional Array

    // Printing 1st array
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }printf("\n");
    

    // printing 2nd array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }

    printArr(a,0,sizeof(a)/sizeof(int));

    // Printing 3D array
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("a[%d][%d][%d]: %d ",i,j,k,a3[i][j][k]);
            }printf("\n");
        }
    }
    
    return 0;
}