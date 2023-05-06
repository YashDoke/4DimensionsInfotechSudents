#include<stdio.h>
int table(int number)
{   
    int i=1;
    for(i=1;i<=10;i++)
    {
        int new_variable=number*i;
        printf("%d",number);
    }

}
int main()
{
    table(12);
    return 0;
}