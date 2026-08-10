//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main(){
    int num1, num2;
    printf("enter two numbers;");
    scanf("%d %d", &num1, &num2);
    printf("sum = %d\n", num1+num2);
    printf("difference = %d\n" , num1-num2);
    printf("product = %d\n", num1*num2);
    if (num2!= 0)
        printf("quotient = %d\n", num1/num2);
    else
        printf("division by zero is not possible");
    return 0;
}