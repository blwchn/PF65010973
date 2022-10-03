#include <stdio.h>
#include <stdlib.h>

void main()

{
    int a, b, gcd,lcm;
    printf("Input number : ");
    scanf("%d", &a);
    printf("Input number : ");
    scanf("%d", &b);
    {
        if (a < b)
            gcd = a;
        else
            gcd = b;
    }
    while (((a % gcd) != 0) || ((b % gcd) != 0))
    {

        gcd = gcd - 1;
    }
    lcm = (a * b) / gcd;
    printf("GCD is %d\n", gcd);
    printf("LCM is %d", lcm);
}
