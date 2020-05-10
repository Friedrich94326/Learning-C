#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int Num1, int Num2);


int main(void)
{

	int Num1, Num2;
	printf("Enter two integers: ");
	scanf_s("%d %d", &Num1, &Num2);

	int GCD = gcd(Num1, Num2);
	printf("The gcd of them is %d.\n\n", GCD);
	return 0;
}
