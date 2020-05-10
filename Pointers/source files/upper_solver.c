#include <stdio.h>

#define maxDim 256;

/* determinant of upper triangular A */
double det(double* A, int n); 
int isZeroVector(double* y, int n);

void upper_solver(double* A, double* x, double* y, int n)
{

	// first verify the solvability of the system
	if (det(A, n) == 0)
	{
		if (isZeroVector(y, n) == 1) // in case y is a zero vector
		{
			printf("This system has infinitely many solutions x!\n");
		}
		else
		{
			printf("There is no solution.  So sad :( \n");
		}
	}
	else
	{

		
		int i, j;
		double* xptr = x;
		double* yptr = y;
		double* aptr = A;
		double a[maxDim][maxDim];

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				a[i][j] = *(aptr + n * i + j);  
			}
		}

		// use back substitution
		double sum;
		for (i = n - 1; i >= 0; i--)
		{
			if (i == n - 1)
			{
				*(xptr + i) = *(yptr + i) / a[i][i];
			}
			else
			{
				for (j = i, sum = 0; j < n; j++)
				{
					sum += *(xptr + j) * a[i][j];
				}
				*(xptr + i) = (*(yptr + i) - sum) / a[i][i];
			}
		}
	}

	return;	
}


double det(double* A, int n)
{
	double DetA;
	double* Aptr = A;
	//double diagEntry[maxDim];

	int i, j;
	for (i = 1, DetA = *Aptr; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				//diagEntry[i] = *Aptr;
				DetA *= *Aptr;
			}
			Aptr++;
		}
	}
	return DetA;
}

int isZeroVector(double* y, int n)
{
	int isZero = 1;
	double* yptr = y;
	int i;

	for (i = 0; i < n; i++)
	{
		if (*yptr != 0)
		{
			isZero = 0;
			break;
		}
	}

	return isZero;
}