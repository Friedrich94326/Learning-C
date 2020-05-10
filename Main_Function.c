#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// #include "polynomial.h"

#define N 33

double Euclid_Distance(double r1, double theta1, double r2, double theta2);
double polynomial(double x, double coef[], int n);
int CoprimePairs(int number[], int NumberSize);
int gcd(int Num1, int Num2);


int main(void)
{

	int Num1, Num2;
	int ans;

	do
	{
		printf("Enter two integers: ");
		scanf_s("%d %d", &Num1, &Num2);


		printf("The gcd of them is %d.\n\n", gcd(Num1, Num2));
		printf("Would you like to carry on this procedure? (1 for aye; 0 for nay)");
		scanf_s("%d ", &ans);

	} while ( ans == 1 );
	


	/* Ex 8.1: Evaluate the distance between two dots given in the polar coordinate. */

	double r1, r2, theta1, theta2;

	printf("Here goes Exercise 8.1\n");
	printf("r1 = ");
	scanf_s("%lf", &r1);
	printf("theta1 = ");
	scanf_s("%lf", &theta1);
	printf("r2 = ");
	scanf_s("%lf", &r2);
	printf("theta2 = ");
	scanf_s("%lf", &theta2);

	double dist;
	dist = Euclid_Distance(r1, theta1, r2, theta2);

	printf("The distance between these 2 dots is %lf.\n\n", dist);

	/* Ex 8.2: Evaluate the values of a polynomial. */

	double coefficient[N];
	double x, y;
	int i, deg, Num;

	printf("deg of polynomial P = ");
	scanf_s("%d", &deg);

	for (i = 0; i <= deg; ++i)
	{
		printf("coef[%d] = ", i);
		scanf_s("%lf", &coefficient[i]);
	}

	printf("How many independent variables x's do you like to give? ");
	scanf_s("%d", &Num);

	for (i = 0; i < Num; ++i)
	{
		printf("the %d-th x: ", i);
		scanf_s("%lf", &x);
		y = polynomial(x, coefficient, deg);
		printf("the corresponding function value is %lf. \n", y);
	}
	printf("\n\n");

	/* Ex 8.3: Given n integers, determine how many coprime pairs of them */

	printf("Here goes Exercise 8.3\n");

	int n;
	int Integer[100];
	printf("How many integers do we consider? (at most 100)");
	scanf_s("%d", &n);

	for (i = 0; i < n; ++i)
	{
		printf("The %d-th integer: ", i);
		scanf_s("%d", &Integer[i]);
	}

	printf("There are %d pairs of comprime intgers in this give array!\n\n", CoprimePairs(Integer, n));

	/* Ex 8.4: b/a + d/c */


	printf("Here goes Exercise 8.4\n");
	int a, b, c, d;
	printf("Now we key four integers a, b, c and d in a row to form two frational numbers b/a and d/c: ");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	int Denominator, Numerator;
	Denominator = b * c + a * d;
	Numerator = a * c;

	int GCD;
	GCD = gcd(Denominator, Numerator);
	Denominator /= GCD;
	Numerator /= GCD;

	printf("The numerator and the denominator turn out to be %d and %d respectively.\n\n", Numerator, Denominator);




	return 0;
}

double Euclid_Distance(double r1, double theta1, double r2, double theta2)
{

	double dist;
	dist = sqrt( pow(r1*cos(theta1) - r2*cos(theta2), 2 ) + pow(r1 * sin(theta1) - r2 * sin(theta2), 2));

	return dist;
}

double polynomial(double x, double coef[], int n)
{
	double y;
	int j;
	
	for (j = 0, y = 0; j <= n; ++j)
	{
		y += coef[j] * pow(x, j);
	}

	return y;
}


int CoprimePairs(int number[], int length)
{

	
	int i, j, Remainder;
	int count = 0;
	
	for (i = 0; i < length; ++i)
	{
		for (j = i; j < length; ++j)
		{
			/* Determine the g.c.d. of 2 integers */
			if (1 == gcd(number[i], number[j]))
			{
				++count;
			}
		}
	}
	
}

int gcd(int num1, int num2)
{
	int Remainder;
	while (num1 % num2 != 0)
	{
		Remainder = num1 % num2;
		num1 = num2;
		num2 = Remainder;
	}
	return num2;
}