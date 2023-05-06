#include<stdio.h>
void table_fun(int n,int i,int table)
{
    //n=10;
    //int table=2;
    if(i<=10)
    {
        printf("\n%d",i*table);
        table_fun(n,i+1,table);
    }
    else if(i==11 && table<n)
    {
            table+=1;
            i=1;
            printf("\n");
            printf("table of %d :",table);

    }
    
   /**else if(table<=n)
    {

    }
    int j=1;
    */
    table_fun(n,i,table);
}

int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int i=1;
    int table =2;
    table_fun(n,i,table);
    return 0;
}