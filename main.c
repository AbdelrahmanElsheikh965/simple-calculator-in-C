#include <stdio.h>
#include <stdlib.h>

int add(int , int);
int subtract(int, int);
int multiply(int, int);
double divide(int, int);

int main()
{
    // write a C Program to make simple calculations (add, sub, multiply, divide) on two numbers

    int firstNum, secondNum;
    char operation;

    printf("Type the first number and, press enter: \n");
    scanf("%d", &firstNum);

    printf("Type the second number and, press enter: \n");
    scanf("%d", &secondNum);

    printf("Choose the operation symbol you want to perform (+, -, *, /) and, press enter: \n");
    scanf(" %c", &operation);

    switch(operation){
        case '+':
        printf("Result of Add Operation is =  %i \n", add(firstNum, secondNum));
        break;

        case '-':
        printf("Result of Add Operation is =  %i \n", subtract(firstNum, secondNum));
        break;

        case '*':
        printf("Result of Add Operation is =  %i \n", multiply(firstNum, secondNum));
        break;

        case '/':
        printf("Result of Add Operation is =  %f \n", divide(firstNum, secondNum));
        break;

        default:
            printf("Default Case Hit");
    }

    return 0;
}

// Default return type is int
add(int firstNum, int secondNum)
{
    return firstNum + secondNum;
}

int subtract(int firstNum, int secondNum)
{
    return firstNum - secondNum;
}
int multiply(int firstNum, int secondNum)
{
    return firstNum * secondNum;
}
double divide(int firstNum, int secondNum)
{
    return (double)firstNum / (double)secondNum;
}
