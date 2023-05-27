#include<stdio.h>

int main(){
    int x=2,y=5,z=0;
    printf("x == 2: %d",x == 2);
    printf("\nx != 5: %d",x != 5);
    printf("\nx != 5 && y >= 5: %d",x != 5 && y >= 5);
    printf("\nz != 0 || x == 2: %d",z != 0 || x == 2);
    printf("\n!(y < 10): %d",!(y < 10));

    return 0;
}