#include<stdio.h>

int main()
{
    // int i,j;
     //int arr[10];
     //int rev_arr[10];
     //printf("Enter a 10 integer array:");


    // for(i=0;i<10;i++){
      // scanf("%d",&arr[i]);
     //}
     //printf("store value of array:");
     
     //for(int i=0;i<10;i++)
     //{
      //   printf("%d", arr[i]); 
     //}
     //for(i=0;i<rev_arr[10];i++)
     //int index=0;
     //for(int i=9;i>=0;i--){
       //rev_arr1[index]=arr1[i];
     //printf("reverse value of array:%d\n",rev_arr[i]);
     //index++;
     //}

     int arr[5];
     int arr2[5];
     for(int i=0;i<5;i++)
     {
        scanf("%d",&arr[i]);
     }
     int index=0;
     for(int  i=4;i>=0;i--)
     {
        arr2[index]=arr[i];
        index++;
     }
     for(int j=0;j<5;j++){
        printf("%d",arr2[j]);
     }

     
     return 0;
}