#include<stdio.h>
int  main()
{
    int a = 5;
    int b = 2;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = a*1.0 / b;
    printf("5 + 2 = %d\n5 - 2 = %d\n5 * 2 = %d\n5 / 2 = %.2f", sum, sub, mul, div);
    return 0;
}