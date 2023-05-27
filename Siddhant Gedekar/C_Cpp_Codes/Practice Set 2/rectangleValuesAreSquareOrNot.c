#include<stdio.h>

int main(){
    printf("Enter length and breadth of a rectangle: ");
    int len, bre,res,result;
    scanf("%d %d",&len,&bre);

    for(int i=2; i<=len;i++){
        res = len%i;
        if((res*res==len)){
            result=1;
            printf("Length is a square of: %d",res);
            break;
        }
        else{
            result=0;
        }
    }

    if(result!=1){
        printf("Length is a square of none.");
    }
    
    for(int j=2; j<=bre;j++){
        res = bre%j;
        if((res*res==bre)){
            result=1;
            printf("\nBreadth is a square of: %d",res);
            break;
        }else{
            result=0;
        }
    }
    if(result!=1){
        printf("\nBreadth is a square of none.");
    }
    
    return 0;
}