#include<stdio.h>
int main()
{
    int x,y,z;

    x=2;
    y=5;
    z=0;

    if(x==2)
    {
        printf("hello\n");
    }
    else if(x!=5)
    {
        printf("World\n");

    }
    else if(x!=5 && y>=5)
    {
        printf("diaplay value of y\n");
    }
    else if(z!=0 || x==2)
    {
        printf("display value of x\n");
    }
    else if(!(y<10))
    {
        printf("display y");
    }
    
    
    return 0;
}