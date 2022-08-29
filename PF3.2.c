#include <stdio.h>
int main()
{
    float a, b, bmi, B;
    printf("Enter Weight (KG) : ");
    scanf("%f", &a);
    printf("Enter Height (m) : ");
    scanf("%f", &b);

    B = b * b;
    bmi = a / B;

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
