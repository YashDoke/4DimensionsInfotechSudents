#include<stdio.h>
#include<string.h>
int main()
{
    float centigrade,fahreheit;
    printf("Enter a tempreture centigrade :");
    scanf("%d",&centigrade);

    fahreheit=(centigrade*(9/5)+32);
    printf("fahreheit : %2f",fahreheit);
    return 0;
}