#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num  > 0)
    {
        printf("%d is positive", num);
    }
    else if(num  < 0){
        printf("%d is negative", num);
    }
    else{
        printf("zero");
    }
    
    return 0;
}