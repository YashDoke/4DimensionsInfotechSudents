#include<stdio.h>
#include<string.h>

union student
{
    char name[50];
    int rollno;
    float marks;

};

int main()
{
    
     union student s1;

     printf("Enter name,rollno,marks :");
    scanf("%s",&s1.name);

    printf("Name :%s",s1.name);
    
    
    return 0;
}