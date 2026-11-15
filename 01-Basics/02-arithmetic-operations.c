#include<stdio.h>

int main (){
    int firstNumber,secondNumber;
    printf("Enter First Number : ");
    scanf("%d",&firstNumber);
    printf("Enter Second Number : ");
    scanf("%d",&secondNumber);
    printf("Addition  = %d\n",firstNumber + secondNumber);
    printf("Subtraction  = %d\n",firstNumber - secondNumber);
    printf("Multiplication   = %d\n",firstNumber * secondNumber);
        if(secondNumber != 0){
            printf("Division  = %.2f\n",(float)firstNumber / secondNumber);
    printf("Modulus  = %d\n",firstNumber % secondNumber);
    } else {
        printf("Division and modulus are underfined for zero divisor.\n");
    }

    return 0;
}