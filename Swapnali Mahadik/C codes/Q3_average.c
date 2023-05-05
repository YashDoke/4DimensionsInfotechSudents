#include<stdio.h>
#include<string.h>
int main()
{
  int first,second,third,avg;
  printf("Enter a first number :\n");
  scanf("%d",&first);
  printf("Enter a second number :\n");
  scanf("%d",&second);
  printf("Enter a third number :\n");
  scanf("%d",&third);

  avg=(first+second+third)/3;
  printf("Avg :%d",avg);

    return 0;
}