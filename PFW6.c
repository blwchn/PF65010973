#include <stdio.h>
int main()
{
    int stdh[10];
    float avg = 0;
    for (int i = 0; i < 10; i += 1)
    {
        printf("%d student hight: ", i + 1);
        scanf("%d", &stdh[i]);
        avg = avg + stdh[i];
    }
    /*for (int i = 0; i < 10; i += 1)
    {
        avg = avg + stdh[i];
    }*/

    printf("average height of students = %.2f", avg / 10);
    return 0;
}
