 #include<stdio.h>

// checking if both conditions are true or not

 int main(){
    printf("Enter two values of a & b: ");
    int a,b;
    scanf("%d %d",&a,&b);

    printf(a<50 && a<b ? "True":"False");
 }