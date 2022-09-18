#include <stdio.h>
int main()
{
    int stdh[10];
    int i = 0;
    float avg;
    while (i < 10)
    {
        printf("%d student hight: ", i + 1);
        scanf("%d", &stdh[i]);
        avg = avg + stdh[i];
        i += 1;
    }
    printf("average hight of students = %.2f", avg / 10);
    return 0;
}
