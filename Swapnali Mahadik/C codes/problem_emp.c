#include<stdio.h>
int main()
{
    int Id,n, Salary;
    char Name;
    // int arr_Id[200]={11,12,13};
    // char arr_Name=["nisha","bhakti","anuja"];
    // int arr_salary[200]={20000,30000,40000};

    printf("Enter a Emp Id :");
    scanf("%d",&Id);
    printf("Enter a Emp Name :");
    scanf("%s",&Name);
    printf("Enter a Emp Salary :");
    scanf("%d",&Salary);

    // while(1)
    // {
        printf("Enter Emp no :");
        scanf("%d",&n);
         // while(2)
         // {
            //printf("Enter Emp Id,Name,Salary :");
            for(int i=0;i<n;i++)
            {
                scanf("%d%s%d",&Id,&Name,&Salary);
            }
    //     }

    // }
    return 0;
}