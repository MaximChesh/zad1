#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void f(int a, int b, int c)
{
    double d, x1, x2;
    d = (b * b) - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1=%f", x1);
        printf("x2=%f", x2);
    }
    if (d < 0)
    {
        printf("korney net");
    }
    if (d == 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        printf("x1=x2=%f", x1);
    }
}

int main()
{
    int a, b, c;
    printf("Enter a\n");
    scanf_s("%d", &a);

    printf("Enter b\n");
    scanf_s("%d", &b);

    printf("Enter c\n");
    scanf_s("%d",&c);

    f(a, b, c);

    return 0;
}