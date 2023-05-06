#include<stdio.h>
int main()
{   
    int i,sum,n=7,x=1,y=1;
    printf("%d %d ",x,y);
    for(i=1;i<n;i++)

 // int count(int x,int y)
    {
    int sum= x+y+1;
    printf("%d ",sum); //1 1 3 5 9 15 25 41
              x = y;
              y=sum;
    }
return 0;
}