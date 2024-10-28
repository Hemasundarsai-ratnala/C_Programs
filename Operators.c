#include <stdio.h>
void main()
{
    int a,b;
    char op;
    printf("Enter the value of a,b and operator:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op){
        case '+':
        printf("Addition of operands is:%d",a+b);
        break;
        case '-':
        printf("Subtraction of operands is:%d",a-b);
        break;
        case '*':
        printf("Multiplication of operands is:%d",a*b);
        break;
        case '/':
        printf("Division of operands is:%d",a/b);
        break;
        case '%':
        printf("Modulus of operands is:%d",a%b);
        break;
        default:
        printf("Invalid Operator");
        }
}