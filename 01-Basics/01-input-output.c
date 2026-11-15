#include<stdio.h>

int main (){
    int firstNumber,secondNumber,sum;
    printf("Enter First Number : ");
    scanf("%d",&firstNumber);
    printf("Enter Second Number : ");
    scanf("%d",&secondNumber);
    sum = firstNumber + secondNumber;
    printf("Sum  = %d\n",sum);
    return 0;
}