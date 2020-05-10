#include <stdio.h>
#include <stdlib.h>


void BubbleSortAscend(int* pArray, int ASize)
{
	int i, j, temp;
	for (i = ASize - 2; i >= 0; --i)
	{
		for (j = 0; j <= i; ++j) // j runs over 0 up to i from the left
		{
			if (*(pArray + j) > * (pArray + j + 1))
			{
				// swap the values of num[j] & num[j+1]
				temp = *(pArray + j);
				*( pArray + j ) = *(pArray + j +1 );
				*(pArray + j + 1 ) = temp;
			}
		}
	}
}
void BubbleSortDescend(int* pArray, int ASize)
{
	int i, j, temp;
	for (i = 0; i < ASize - 1; ++i)
	{
		for (j = i; j >= 0; --j) // j runs over 0 to i from the right
		{
			if (*(pArray + j) < * (pArray + j + 1))
			{
				// swap the values of num[j] & num[j+1]
				temp = *(pArray + j);
				*(pArray + j) = *(pArray + j + 1);
				*(pArray + j + 1) = temp;
			}
		}
	}
}

void ReverseNumbers(int* pArray, int ASize)
{
	int* pStart = pArray;
	int* pEnd = pStart + ASize - 1;
	int temp;
	
	while (pStart <= pEnd)
	{
		temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;
		++pStart;
		--pEnd;
	}
}

int main(void)
{
	/* bubble-sorting */

	int N;
	int i;
	int num[100];

	printf("How many integers will be sorted? (at max 100)");
	scanf_s("%d", &N);

	for (i = 0; i < N; ++i)
	{
		printf("Thie %d-th intger: ", i + 1);
		scanf_s("%d", &num[i]);
	}

	printf("Do you prefer to the ascending order or the descending order? (Enter 'a' or 'd') ");
	char order;
	scanf_s(" %c", &order);  // char input shall be replaced with string input later!

	if (order == 'a')
	{
		BubbleSortAscend(num, N);
	}
	else if (order == 'd')
	{
		BubbleSortDescend(num, N);
	}
	else
	{
		printf("Invalid command detected!");
	}

	for (i = 0; i < N; ++i)
	{
		printf("%d\n", num[i]);
	}


	/* Ex 6.1: Reverse numbers */
	printf("Enter the length of the array of integers. (do not exceed 100)");
	scanf_s("%d", &N);

	int arr[100];
	
	printf("Before reversion:\n");
	for (i = 0; i < N; ++i)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}
	ReverseNumbers(arr, N);

	printf("After reversion:\n");
	for (i = 0; i < N; ++i)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
	}

	/* Ex 6.3: Numbers divided into 2 groups in terms of odd and even numbers */

	printf("How many integers are you gonna enter? ");
	scanf_s("%d", &N);

	for (i = 0; i < N; ++i)
	{
		printf("The %d-th number is set to: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < N; ++i)
	{
		if (arr[i] % 2 != 0)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");

	for (i = 0; i < N; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");

	/* Ex 6.4: averaged credits over students and courses */
	int s;
	int c;
	printf("How many attendants? And how many courses do their take? (both less or equal to 100)");
	scanf_s("%d %d", &s, &c);
	
	int credits[100][100];
	int j;

	for (i = 0; i < s; ++i)
	{
		printf("The %d-th student got his credits as follows: \n", i + 1);
		for (j = 0; j < c; ++j)
		{
			scanf_s("%d", &credits[i][j]);
		}
	}

	float avg; 

	// average over courses
	for (i = 0; i < s; ++i)
	{
		for (j = 0, avg = 0; j < c; ++j)
		{
			avg += credits[i][j];
		}
		avg /= c; 
		printf("The %d-th student got his averaged score: %2f\n", i + 1, avg);
	}

	// average over students
	for (j = 0; j < c; ++j)
	{
		for (i = 0, avg = 0; i < s; ++i)
		{
			avg += credits[i][j];
		}
		avg /= s;
		printf("The average score in the %d-th course: %2f\n", j + 1, avg);
	}

	return 0;
}
