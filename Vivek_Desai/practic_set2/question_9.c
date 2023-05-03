#include<stdio.h>

int main(){

    int sta,tas;
    printf("Total Classes held");
    scanf("%d",&tas);
     printf("Total Classes attended by student");
    scanf("%d",&sta);
    char med;
        printf("Enter medical cause");
        scanf("%c",&med);
    tas *= 0.75;

    if(sta>=tas){
        printf("Allowed");
    }
    // else{
    //     char med;
    //     printf("Enter medical cause");
    //     scanf(" %c",&med);
    //     printf("%c",med);
    // }

    


    return 0;
}

// #include <stdio.h>

// int main() {
//     int sta, tas;

//     printf("Year total attendance: ");
//     scanf("%d", &tas);

//     printf("Total attendance of student: ");
//     scanf("%d", &sta);

//     tas = tas * 0.75;

//     if (sta >= tas) {
//         printf("\nAllow to exam");
//     } else {
//         char med;
//         printf("\nMedical causes (Y or N): ");
//         scanf(" %c", &med);

//         if (med == 'Y' || med == 'y') {
//             printf("\nAllow to exam");
//         } else {
//             printf("\nNot allow to exam");
//         }
//     }

//     return 0;
// }
