#include <stdio.h>

int main()
{
    int a, b, gcd = 1, lcm;

    printf("Input number : ");
    scanf("%d", &a);
    printf("Input number : ");
    scanf("%d", &b);

    int x = a, y = b;

    while (y != 0 && x != 0)
    {
        int t = y;
        y = x % y;
        x = t;
    }
    gcd = x;
    lcm = (a * b) / gcd;

    printf("\nGCD is %d\n", gcd);
    printf("LCM is %d", lcm);
    return 0;
}