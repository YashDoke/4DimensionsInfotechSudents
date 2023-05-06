#include<stdio.h>

int main(){
    
    int English,Maths,Physics;
     
 printf("Enter values of all subjects:");

    scanf("%d",&English);
    scanf("%d",&Maths);
    scanf("%d",&Physics);
    printf("English:%d\n",English);
    printf(" Maths:%d\n",Maths);
    printf("Physics:%d\n",Physics);
    

     English=78;
     Maths=45;
     Physics=62;

     int total=English + Maths + Physics;
     float percentage=((total/3));
     printf("Total Percentage of three subjects:%d\n %f\n",total,percentage);

     return 0;
}