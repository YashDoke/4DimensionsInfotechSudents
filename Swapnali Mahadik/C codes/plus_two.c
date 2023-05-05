#include <stdio.h>

int main() {
    int num, a, b, c, d;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Extracting each digit of the number
    a = num / 1000;
    b = (num / 100) % 10;
    c = (num / 10) % 10;
    d = num % 10;

    // Adding 2 to each digit
    a = a + 2;
    b = b + 2;
    c = c + 2;
    d = d + 2;

    // Building the new number
    int new_num = a * 1000 + b * 100 + c * 10 + d;

    printf("The new number is: %d\n", new_num);

    return 0;
}

// name = "Virat";

// new_naME = "Viart";

// name[0] = 'V';  
// name[1] = 'i';
// name[2] = 'r';
// name[3] = 'a';
// name[4] = 't';


// if(name[i]=='i'){
//     printf(i);
// }
// if(name[i]=='r'){
//     printf(i);
// }
// if(name[i]=='a'){
//     printf(i);
// }

// temp = name[2]
// name[2] = name[3]
// name[3] = temp


// result = name[1]+name[2]+name[3]