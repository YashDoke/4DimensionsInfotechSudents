#include<stdio.h>
 void printTable(int n,int i,int table)
 {
    // n=10;
     //int table=2;
    if(i<=10)
    {
        printf("%d\n",i*table);
        printTable(n,i+1,table);
    }
        else if(i==11 && table<n)
        {
            table=table+1;
            //printf("%d",table);
            i=1;
             printf("\n");
        }
        printTable(n,i,table);
 }
 
    //  else if(table<=n)
    // {
        
    // }
    //     int j=1;
    //     printTable(n++,j,table);
 

 int main()
 {
    int n,table;
    printf("Enter a number :");
    scanf("%d",&n);
    int i=1;
    printf("Enter a table number :");
    scanf("%d",&table);
    //int table=2;
    printTable(n,i,table);

    return 0;
 }