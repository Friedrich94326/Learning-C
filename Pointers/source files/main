#include <stdio.h>
#include <stdlib.h>


#define N 5
#define M 10
#define maxDim 256

/* function prototypes */
int* first_positive(int* iptr);
int Max(int* iptr[], int n);
int add_n(int* iptr, int k);
void upper_solver(double* A, double* x, double* y, int n);

int main(void)
{

	int* iptr;
	float* fptr;
	double* dptr;

	printf("size of iptr = %d\n", sizeof(iptr));
	printf("size of iptr = %d\n", sizeof(fptr));
	printf("size of iptr = %d\n", sizeof(dptr));

	int arr[N];
	int i;
	for (i = 0; i < N; ++i)
	{
		arr[i] = i*10;
	}
	

	/* Pointers with Arrays */
	iptr = arr;
	for (i = 0; i < N; ++i)
	{
		printf("i = %d: \n", i);
		printf("ptr + %d = %p \n", i, iptr + i);
		printf("the address of arr[%d] = %p \n\n", i, &arr[i]);
	}

	printf("Pointer iptr points initially to arr[0]:\n");
	for (i = 0, iptr = arr; i < N; i++)
	{
		iptr[i] += 3;
	}

	for (i = 0; i < N; i++)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
	}
	printf("\n\n\n");

	printf("Pointer iptr points initially to arr[2]:\n");
	for (i = 0, iptr = &arr[2]; i < N; i++)
	{
		iptr[i] += 3;
	}

	for (i = 0; i < N - 3; i++)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
	}
	printf("\n\n\n");

	/* pointer arithmetic */

	int* iptr1, * iptr2, *iptr3;
	for (i = 0; i < N; i++)
	{
		printf("address of arr[%d] = %p \n", i, &arr[i]);
	}

	iptr1 = &arr[2];
	iptr2 = iptr1 + 2;
	
	printf("iptr1 = %p  address of arr[%d] = %p  \n", iptr1, 2, &arr[2]);
	printf("iptr2 = %p  address of arr[%d] = %p  \n", iptr2, 4, &arr[4]);


	/* function that returns a pointer */

	printf("Function that returns a pointer: \n");
	int Arr[10] = { 0, 0, 0, 5, 9, 0, 0, 6, 0, 2 };

	iptr = first_positive(Arr);
	printf("*iptr = %d, iptr = %p \n", *iptr, iptr);
	printf("iptr - Arr = %d \n", iptr - Arr);

	iptr = first_positive(&Arr[8]);
	printf("*iptr = %d, iptr = %p \n", *iptr, iptr);
	printf("iptr - Arr = %d \n", iptr - Arr);

	/* Ex 9.1: Create fucntion 'max' that returnss the max integer among these integers. */
	
	int array[M];
	int* iPtr[M]; // array of pointers
	for (i = 0; i < M; i++)
	{
		printf("array[%d] = ", i);
		scanf_s("%d", &array[i]);
		iPtr[i] = &array[i]; // each pointer points to the corresponding element in the array
	}
	printf("max(iPtr, M) = %d\n\n", Max(iPtr, M) );

	/*Ex 9.2: add a number n on a specified integer */
	printf("Here comes Exercise 9.2! Add k on a given number n. \n");
	int n, k;
	printf("the number n: ");
	scanf_s("%d", &n);
	printf("the number k: ");
	scanf_s("%d", &k);
	
	i = add_n(NULL, k);
	printf("answer = %d \n", i);

	i = add_n(&n, k);
	printf("answer = %d \n\n", i);


	/* Ex 9.3: Solving a system of linear equations Ax = y */

	int j;
	double A[maxDim * (maxDim - 1) / 2]; // 1D array to express the n by n square matrix
	double* aptr = A;
	double x[maxDim];
	double y[maxDim];

	printf("To solve a system of linear equation A x = y.\n");
	printf("dimension of x: (do not exceed 256)");
	scanf_s("%d", &n);

	printf("Initialise A: \n");
	for ( i = 0; i < n; i++ )
	{
		for (j = i; j < n; j++)
		{
			// A is upper triangular
			printf("A[%d][%d] = ", i, j);
			scanf_s("%lf", aptr);
			aptr++;
		}
	}

	printf("Initialise y: \n");
	for ( i = 0; i < n; i++)
	{
		printf("y[%d] = ", i);
		scnaf_s("%lf", &y[i]);
	}

	upper_solve(A, x, y, n);


	// show the solution x
	for (i = 0; i < n; i++)
	{
		printf("x[%d] = %lf \n", i, x[i]);
	}



	return 0;
}

