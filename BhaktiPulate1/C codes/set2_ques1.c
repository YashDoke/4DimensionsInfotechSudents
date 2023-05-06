#include<stdio.h>

int main()
{ 
    //here l = length of rectangle , w=width of rectangle,p= perimeter of reactangle
     int l , w;
    printf("Enter value of length:\n");
    scanf("%d",&l);
    scanf("%d",&w);
    

    if ( l==w)
    {
        printf(" it is square /n");
    }

    else
    {
         printf(" it is not square \n");
    }
    
    return 0;
}