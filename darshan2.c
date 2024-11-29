// create a program for calculator using switch case

#include<stdio.h>
int main()
{
    char operator;
    float num1,num2,result;
    printf("enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("enter two operands");
    scanf("%f %f",&num1,&num2);
    switch(operator)
    case '+': result=num1+num2;
    printf("%2f+%2f=%2f\n",num1,num2,result);
    break;
    case '-':result=num1-num2;
    printf("")