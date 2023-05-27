#include<stdio.h>
#include<string.h>

// void strlength(char s[]){
//     int sum=0;
//     for(int i=1;i<=sizeof(s)/sizeof(char);i++){
//         sum+=1;
//     }
//     printf("%d",sum);
// }

int main(){
    char s[] = "refrigerator";

    printf("Printing string length using strlen() function: %d\n",strlen(s));
    printf("Printing string length using user defined function: %d",sizeof(s));
    printf("\n\nAs we can see above that strlen() function gave out \nput 7 instead of 8 and the reason is that it starts \ncounting from 0th position instead of 1 and hence the difference");
    // strlength(s);

    return 0;
}