#include<stdio.h>
#include<string.h>

struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    struct Person p1;
    
        strcpy(p1.name,"swapnali");
        p1.age=25;
        p1.height=5.5;

        printf("%s\n",p1.name);
        printf("%d\n",p1.age);
        printf("%f\n",p1.height);

    
    return 0;
}
