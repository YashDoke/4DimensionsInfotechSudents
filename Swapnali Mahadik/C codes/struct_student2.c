#include<stdio.h>

struct student2
{
    char name[60];
    int rollno;
    float marks;
};

int main()
{
    struct student2 s2={"swapnali",30,90.000};
    printf("Name :%s\n Rollno :%d\n Marks :%f\n",s2.name,s2.rollno,s2.marks);
    return 0;
}
