#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f(int a1, int b1, int c1, int a2, int b2, int c2) {
    double x, y;
    x = (c1+c2)/(a1 + a2);
    y = c2 - a2 * x;
    printf("(%f;%f)\n", x, y);
}
int main() {
	int a1, b1, c1;
    printf("Enter a of first equations\n");
    scanf_s("%d", &a1);

    printf("Enter b of first equations\n");
    scanf_s("%d", &b1);

    printf("Enter c of first equations\n");
    scanf_s("%d", &c1);

    int a2, b2, c2;
    printf("Enter a of second equations\n");
    scanf_s("%d", &a2);

    printf("Enter b of second equations\n");
    scanf_s("%d", &b2);

    printf("Enter c of second equations\n");
    scanf_s("%d", &c2);

    f(a1, b1, c1, a2, b2, c2);
}