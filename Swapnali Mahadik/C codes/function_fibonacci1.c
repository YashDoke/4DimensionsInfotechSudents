#include<stdio.h>
int fibo(int n)
{
    
    if(n==0 || n==1)
    {
       return n;
        
    }
    
    return fibo(n-1) + fibo(n-2);
       
}

int count(int n)
{
    int i,x=1,y=1,sum,total_call=0;
    //printf("Enter a number :");
    //scanf("%d",&n);
    

//printf("\n%d %d ",x,y);
for(i=1;i<n;i++)
    {
        sum=x+y+1;
        total_call +=sum;
        //printf(" %d ",sum);
        x=y;
        y=sum;
    }
    printf("\ntotal function calls :%d",total_call+2);
    return 0;
}

int main()
{
    int n,i ;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("Fibonacci series :");
    for( i=0;i<n;i++)
    {

    printf(" %d ",fibo(i));
}


 count(n);

    return 0;

}