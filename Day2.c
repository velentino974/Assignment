#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;
    float num1, num2, sum;

   
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    sum = num1 + num2;

    
    printf("Sum = %.2f\n", sum);

    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    
    simple_interest = (principal * rate * time) / 100;

    
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
