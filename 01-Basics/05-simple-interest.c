#include<stdio.h>

int main(){
    float principal,interest,time,si;
    printf("Enter Principal amount : ");
    scanf("%f",&principal);
    printf("Enter Rate of interest : ");
    scanf("%f",&interest);
    printf("Enter Time (in years) : ");
    scanf("%f",&time);
    si = (principal*interest*time)/100;
    printf("Simple Interest = %.2f",si);

    return 0;
}