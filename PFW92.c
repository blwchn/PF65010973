#include <stdio.h>
int Factorial(int);

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    printf("%d! = %d", n, Factorial(n));
    return 0;
}

int Factorial(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}