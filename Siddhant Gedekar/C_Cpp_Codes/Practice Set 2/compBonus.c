#include<stdio.h>

int main(){
    float bonus=0.05, salary, yearofservice;
    printf("Enter Salary and year Of Service: ");
    scanf("%f %f",&salary,&yearofservice);
    if(yearofservice>5){
        printf("You get a bonus of %.3f on your salary. Hence Total salary: %.3f",salary*0.05,(salary + salary*0.05));
    }
    else{
        printf("Currently you are not eligible for a bonus, hence you get your salary: %.3f",salary);
    }
    return 0;
}