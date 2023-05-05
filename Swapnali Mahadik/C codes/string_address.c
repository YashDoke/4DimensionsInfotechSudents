#include<stdio.h>
#include<string.h>
int main()

{
    char name[]="hello";
    printf("%d\n",&name);
    printf("%d\n",&name[0]);
    printf("%d\n",&name[1]);
    printf("%d\n",&name[2]);
    printf("%d\n",&name[3]);
    printf("%d",&name[4]);

    return 0;
    
}