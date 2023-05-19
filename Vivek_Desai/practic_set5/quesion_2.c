#include<stdio.h>

float circle(float red){
    printf("circle Dimeter is : %f\n",red*2);
    printf("circle Dimeter is : %.2f\n",(3.14*2)*red);
    printf("circle Dimeter is : %.2f",(red*red)*3.14);

    return 0;

}

int main(){

    float rad;

    printf("Eneter the radius of circle: ");
    scanf("%f",&rad);

    circle(rad);



    return 0;
}