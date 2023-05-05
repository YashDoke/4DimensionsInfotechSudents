#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int Rollno;
    float marks;

};

int main()
{
    struct student s3[3];
    
    printf("Enter a 3 student ");

    for(int i=0;i<3;i++)
    {
        scanf("%s %d %f",&s3[i].name, &s3[i].Rollno, &s3[i].marks);
    }

    for(int i=0;i<3;i++)
    {
        printf("Name :%s\n Rollno :%d\n Marks :%f\n",s3[i].name,s3[i].Rollno,s3[i].marks);
    }
    
    return 0;
}