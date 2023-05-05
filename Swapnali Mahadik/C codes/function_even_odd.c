#include<stdio.h>
int even_odd(int n)
{
    if(n%2==0)
    {
        printf(" even\n");
    }
    else
    {
        printf("odd number");
    }

}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    even_odd(n);

    return 0;
}