import .java.util.Scanner;

{
    public static void main(string args[])
    int num1,num2;
    int result=0;
    Scanner sc = new Scanner(System.in);
    printf("Enter a  two numbers:");
    int num1=sc.nextInt();
    int num2=sc.nextInt();
    printf("Enter a Operators:(+,-,*,/)");
    char op=sc.next().charAt(0);
    switch(op)
    {
        case '+':
        printf("addition of two numbers is:");
        result=num1+num2;
        printf(result);
        break;
        case'-':
        printf("substraction of two numbers is:");
        result=num1+num2;
        printf(result);
        break;
        case '*':
        printf("multiplication of two numbers is:");
        result= num1* num2;
        printf(result);
        break;
        case '/':
        printf("division of two numbers is :");
        result=num1+num2;
        printf(result);
        break;
        default:
        printf("wrong choose");
        break;
    
    }


    }



