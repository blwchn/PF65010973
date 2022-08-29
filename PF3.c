#include <stdio.h>
int main()
{
    float a, b, bmi;
    printf("Enter Height (m) : ");
    scanf("%f", &a);
    printf(" Enter Weight (KG) : ");
    scanf("%f", &b);
    bmi = a / (b * b);
    printf("BMI : %.2f", bmi);
    if (bmi < 18.5)
        printf(" Underweight");
    if (bmi >= 18.5 && bmi <= 24.9)
        printf(" Normal");
    if (bmi >= 25 && bmi <= 29.9)
        printf(" Overweight");
    if (bmi >= 30)
        printf(" Obesity");
}