#include<stdio.h>

int rectangle(int l,int b)
{
    printf("Area is %d\n",l*b);
    printf("perimeter is %d\n",2*(l+b));
}

 
    int main()
    {
        rectangle(4,5);
        rectangle(10,3);

       return 0;
    }