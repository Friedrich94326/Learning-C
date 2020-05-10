#include <stdio.h>
#include <math.h>

int main(void)
{
	/* Exercise 4.1: Give 3 integers and determine the mininum value among them. */
	
	int num[100];
	int Max, min;
	int N;
	int k;
	printf("Key in the number of inputs N (at most 100) = ");
	scanf_s("%d", &N);

	printf("Now initialise the integers term by term.\n");
	for (k = 0; k < N; ++k)
	{
		printf("num[%d] = ", k);
		scanf_s("%d", &num[k]);
	}

	Max_min(&num[0], N, &Max, &min);
	// to be revised later

	//min = Find_min(num, );

	
	printf("The Max and the min are respectively %d and %d. \n", Max, min);



	/* Exercise 4.2: Input the coordinates of a batch of points in the 2D plane. And identify the point which is farhtest from the origin. */

	printf("Key in the number of points N (less or equal than 100) = ");
	scanf_s("%d", &N);


	double Pts[100][2];
	printf("Initialise each cooridinate of these points.\n");
	for (k = 0; k < N; ++k)
	{
		printf("Point %d: x-coordinate = ", k );
		scanf_s("%f", &Pts[k][0]);
		printf("Point %d: y-coordinate = ", k);
		scanf_s("%f", &Pts[k][1]);
	}

	
	// Farthest_Coordinate(Pts, N);

	if (N == 3)
	{
		double dist[3];
		double tempX, tempY;
		

		for (k = 0; k < N; ++k)
		{
			tempX = Pts[k][0];
			tempY = Pts[k][1];
			dist[k] = sqrt(tempX * tempX + tempY * tempY);
			printf("dist[%d] = %f\n", k, dist[k]);
		}

		double distMax, distMin;
		int idxMin, idxMax;

		for (k = 0, idxMin = 0, min = dist[0]; k < (N - 1); ++k)  // to determine min
		{
			min = ( min <= dist[k + 1]) ? min : dist[k + 1];
			idxMin = ( min <= dist[k + 1] ) ? idxMin : k + 1;
		}

		for (k = 0, idxMax = 0, Max = dist[0]; k < (N - 1); ++k)  // to determine Max
		{
			Max = ( Max >= dist[k + 1]) ? Max : dist[k + 1];
			idxMax = ( Max >= dist[k + 1] ) ? idxMax : k + 1;
		}

		printf("min of distance = %lf \n", distMin);
		printf("Max of distance = %lf \n", distMax);
	}

	/* Exercise 4.7: Continuous sum from an integer to another */

	int N1, N2;

	printf("Key in the values of two integers N1 and N2 (N1 < N2)\n");
	scanf_s("%d %d", &N1, &N2);

	int sum = 0;
	int temp = N1;
	while (temp <= N2)
	{
		sum += temp;
		++temp;
	}

	printf("The temp stays at the number of %d. \n", temp);
	printf("The sum turns out %d. \n", sum);

	/* Exercise 4.9:  Solve the numbers of hens, rabbits and crabs */
	int TotalNum;
	int tails;
	int feet;

	printf("Give the total number of these 3 kinds of species: ");
	scanf_s("%d", &TotalNum);
	printf("Give the number of their feet: ");
	scanf_s("%d", &feet);
	printf("Give the number of their tails: ");
	scanf_s("%d", &tails);

	int n1; // number of hens
	int n2; // number of rabbits
	int n3; // number of crabs

	// to resume the program from here!!

	/* 
	 
	 n1 + n2 + n3		 = TotalNum;
	 n1 + n2			 = tails;
	 2*n1 + 4*n2 + 8*n3 = feet;

	 */

	n3 = TotalNum - tails;

	if ((feet - 2 * tails - 8 * n3) % 2 == 0)
	{
		n2 = (feet - 2 * tails - 8 * n3) / 2;
		n1 = tails - n2;
		if (n1 >= 0 && n2 >= 0 && n3 >= 0)
			printf("Number of hens: %d \n Number of rabbits: %d \n Number of crabs: %d \n ", n1, n2, n3);
		else
			printf("This problem is unsolvale!\n");	
	}
	else
	{
		printf("This problem is unsolvable!\n");
	}


	return 0;
}