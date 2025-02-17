#include<stdio.h>
int main()
{
    int a = 20;
    int b = 10;
    int x = 20;
    int y = 3;
    int addition = a + b;
    int subtraction = a - b;
    int multiply = a * b;
    float division = x*1.0 / y;
    int modulus = a / b;
    printf("%d %d %d %f %d", addition,subtraction,multiply,division,modulus);
    return 0;
}