#include<stdio.h>

 struct student
{
    char name[50];
    int rollno;
    float marks;
};

int main()
{
    struct  student s1;
    
    printf("Enter name,rollno,marks :");
    scanf("%s %d %f",&s1.name,&s1.rollno,&s1.marks);

    printf("Name :%s\n Rollno :%d\n Marks : %f\n",s1.name,s1.rollno,s1.marks );
    
    return 0;
}
