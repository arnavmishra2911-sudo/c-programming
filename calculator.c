#include <stdio.h>
#include <math.h> //read about this-it is a library i c
// kis kis jagha par kya variable nhi bana skte
// Iterator
// Static
// String
// prinf() ~ Acche se padho detail me..
// OPerators: Ternary Operator, Binary operators Unary operators
// unary operator is used when operand is one or single
// binary operator is used when operands are two
// ternary operators are operators used for 3 operands and it is mainly used for conditions
// Conditional stmt - if else else if
// Jump Statements(goto)-done in goto.c
// Scopes-there are three types of scopes all are in scope.c
// Types Of comments and its usage---There are two types of comments in c single line and multi line for single line // for multi line /*......*/
//%s ke bare me and String in c
//%s is used for many characters like "Arnav" like %c is used for single character and %s for multiple
// string in c are is a word, name, or text written inside double quotes, like "Arnav" or "Hello"
int main()
{
    int num1, num2;
    printf("Welcome to calcultor\n");
    //  printf(num1);
    // printf is mainly a function because it comletes a task and after comma variable or anything is printed that is the variable which is variable of format specifier
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter operator(+,-,*,/);\n");
    char operator;
    scanf(" %c", &operator);
    // format specifiers-%d,%c,%s,%f
    printf("Enter second number:\n");
    scanf("%d", &num2);

    // When Not to use Switch case
    // when multiple conditions use switch case or it dont have many conditions use if else instead of switch case

    switch (operator)
    {
    case '+':
        printf("%d + %d =%d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d \n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d \n", num1, num2, num1 * num2); // task 3(WHY?)
        //& is adress of value when we are using &a & is telling adress of nums or without it we can't give exact adress of the variable
        break;
    case '/':
        if (num2 != 0)
            printf("%d / %d = %d\n", num1, num2, num1 / num2); //.2f is for show 2 digit after decimal
        else
            printf("Division by zero is not allowed\n");
        break;
    default:
        printf("invalid operator\n");
    }

    printf("Thank You For using Calculator\n");
    return 0;
}