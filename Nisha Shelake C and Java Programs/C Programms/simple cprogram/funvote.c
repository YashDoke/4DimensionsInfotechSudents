#include<stdio.h>
int voteage(int age)
{   
    if(age>=18)
    {
        printf("your age is %d you can able for vote \n",age);
    }
    else
    {
        printf("your age is %d you are not able for vote\n",age);
    }
}
int main()
{   
    voteage(20);
    return 0;
}