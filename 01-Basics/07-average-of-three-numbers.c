#include<stdio.h>

int main(){
    float firstNumber,secondNumber,thirdNumber,sum,average;
    printf("Enter firstNumber: ");
    scanf("%f",&firstNumber);
    printf("Enter secondNumber : ");
    scanf("%f",&secondNumber);
    printf("Enter thirdNumber : ");
    scanf("%f",&thirdNumber);
    sum = firstNumber+secondNumber+thirdNumber;
    average = sum/3;
    printf("Average  = %.2f",average);

    return 0;
}