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
    int i = 1;
    while (i <= x)
    {
        result *= i;
        i+=1;
    }
    return result;
}