#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    float total,avg,per, grade;

    printf("Enter a first subject :\n");
    scanf("%d",&sub1);
    printf("Enter a second subject :\n");
    scanf("%d",&sub2);
    printf("Enter a third subject :\n");
    scanf("%d",&sub3);
    printf("Enter a fourth subject :\n");
    scanf("%d",&sub4);
    printf("Enter a fifth subject :\n");
    scanf("%d",&sub5);

    total=(sub1+sub2+sub3+sub4+sub5);
    printf("Total :%f\n",total);

    avg=total/5;
    printf("average :%f\n",avg);

    per= ((total/500)*100);
    printf("percentage :%f\n",per);

    if(per>80)
    {
        printf("A+ Grade");
    }
    else if (per>=65 && per<=80)
    {
        printf("A Grade");
    }
    else if (per>=50 && per<=65)
    {
        printf("B Grade");
    }
    else if (per>=42 && per<=50)
    {
        printf("C Grade");
    }
    else if(per<42)
    {
        printf("Fail");
    }
    
    
    


    return 0;
}