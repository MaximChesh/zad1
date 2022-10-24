#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f(int factorial) {
	int otvet = 1;

	do {
		otvet = factorial * otvet;
		factorial = factorial - 1;
	} while (factorial > 0);

	printf("%d", otvet);
}
int main() {
	int factorial;
	printf("Enter a factorial\n");
	scanf_s("%d", &factorial);

	f(factorial);
}