#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define N 5

int* first_positive(int* iptr);

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



	return 0;
}

