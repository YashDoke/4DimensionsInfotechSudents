#include<stdio.h>
#include<string.h>
int main()
{
    float P,R,T,SI;
    printf("Enter a principle amount :");
    scanf("%f",&P);

    printf("Enter a rate :");
    scanf("%f",&R);

    printf("Enter a time :");
    scanf("%f",&T);

    SI=(P*R*T)/100;

    printf("Simple interest :%f",SI);
}