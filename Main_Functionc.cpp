#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ReverseArray(int* pArray, int LengthA)
{
	if (NULL == pArray)
		return;

	int* pStart = pArray; // pStart points to the address of the first integer in pArray
	int* pEnd = pStart + LengthA - 1; // pEnd points to the address of the last entry in the array

	while (pEnd > pStart)
	{
		// swap the addresses by the 2 pointers
		int temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		++pStart;
		--pEnd;
	}
	return;
}


int main(void)
{
	/* Ex 5.1: compute n^i */
	int n;
	int i;
	int x = 1;

	printf("Key in the value of base n: ");
	scanf_s("%d", &n);
	printf("Key in the value of power i ");
	scanf_s("%d", &i);

	if ((i == 0) && (n == 0))
	{
		printf("This ain't work with the undefined expression 0^0!\n");
		return 1;
	}
	else if ((i == 0) && (n != 0))
	{
		x = 1;
	}
	else
	{
		int count;
		for (count = 0; count < i; ++count)
		{
			x *= n;
		}
	}
	printf("x = %d \n", x);


	/* Ex 5.5: Give serial commands to a moving vehicle.  And print out the final position of that car. */
	int N;
	int posX;
	int posY;
	int cmd[200]; // array of commands
	char dir = 'n'; // direction indicator
	int v; // constant speed
	int dt;

	printf("Give the original position of the vehicle. \n posX0 = ");
	//printf("%d", posX);
	scanf_s("%d", &posX);
	printf(" posY0 = ");
	//printf("%d\n", posY);
	scanf_s("%d", &posY);

	printf("In which direction is the car currently heading? (n/e/s/w) ");
	scanf_s(" %c", &dir);
	printf("Also, the car shall move at a constant speed.  How fast do you wish it will move? ");
	scanf_s("%d", &v);

	printf("Give the number of commands N (N <= 100): ");
	scanf_s("%d", &N);
	//printf("%d \n", N);

	
	for (i = 0; i < N; ++i)
	{
		switch ((i % 2) == 0)
		{
		case 1: // even i
			printf("The %d-th command to indicate time: ", i);
			scanf_s("%d", &cmd[i]);
			break;
		default: // odd i
			printf("The %d-th command to change direction: ", i);
			scanf_s("%d", &cmd[i]);
		}
		printf("cmd[%d] = %d \n", i , cmd[i]);
		
	}

	/*
	cmd[0] = 5;
	cmd[1] = 1;
	cmd[2] = 10;
	cmd[3] = 2;
	cmd[4] = 20;
	cmd[5] = 3;  // for debugging
	*/

	for (i = 0; i < N; ++i)
	{
		if ((i % 2 != 0) && (cmd[i] != 3)) // position changes
		{
			if (i < 2)
			{
				dt = cmd[0];
			}
			else
			{
				dt = cmd[i - 1] - cmd[i - 3];
			}
			switch (dir)
			{
			case 'n':
				posX = posX;
				posY += dt * v;
				if (cmd[i] == 1)
				{
					dir = 'w'; // turn left to head the west 
				}
				else
				{
					dir = 'e'; // turn right to head the east
				}
				break;
			case 'e':
				posX += dt * v;
				posY = posY;
				if (cmd[i] == 1)
				{
					dir = 'n'; // turn left to head the north 
				}
				else
				{
					dir = 's'; // turn right to head the south
				}
				break;
			case 's':
				posX = posX;
				posY -= dt * v;
				if (cmd[i] == 1)
				{
					dir = 'w'; // turn left to head the east 
				}
				else
				{
					dir = 'e'; // turn right to head the west
				}
				break;
			case 'w':
				posX -= dt * v;
				posY = posY;
				if (cmd[i] == 1)
				{
					dir = 's'; // turn left to head the north 
				}
				else
				{
					dir = 'n'; // turn right to head the south
				}
				break;
			default:
				printf("Invalid direction!\n");
			}
			printf("i = %d: cmd[%d] = %d \n", i, i, cmd[i]);
			printf("And the car moves to (%d, %d) and head to %c. \n", posX, posY, dir);
		}
		else if ((i % 2 != 0) && (cmd[i] == 3))
		{
			switch (dir)
			{
			case 'n':
				posX = posX;
				posY += dt * v;
				break;
			case 'e':
				posX += dt * v;
				posY = posY;
				break;
			case 's':
				posX = posX;
				posY -= dt * v;
				break;
			case 'w':
				posX -= dt * v;
				posY = posY;
				break;
			default:
				printf("Invalid direction!\n");
			}
			printf("i = %d: cmd[%d] = %d \n", i, i, cmd[i]);
			printf("And the car moves to (%d, %d) and head to %c. \n", posX, posY, dir);
			break;
		}
		else
		{
			printf("i = %d: cmd[%d] = %d, dir = %c \n", i, i, cmd[i], dir);
			continue;
		}
	}
	printf("The stupid vehicle was pulled over at the location of (%d, %d).\n", posX, posY);


	/* Ex 5.10 */
	// ¥Î¦P¾lªº·§©À!!
	printf("Enter a natural number N: ");
	scanf_s("%d", &N);

	int dig[100]; // digits of N
	int count = 0;
	do
	{
		dig[count] = (N % 10);
		N /= 10;
		++count;
	} while (N > 0);   // extraction of all the digits 
	printf("count = %d \n", count);

	/*
	for (i = 0; i < count; ++i)
	{
		printf("dig[%d] = %d \n", i, dig[i]);
	}
	*/

	ReverseArray(&dig[0], count);

	for (i = 0; i < count; ++i)
	{
		printf("dig[%d] = %d \n", i, dig[i]);
	}


	printf("How many times do you implement this reversion of digits? ");
	scanf_s("%d", &n);

	int k = 0;

	do
	{
		printf("The %d-th reversion:  ", k);
		for (i = 0; i < count; ++i)
		{
			printf("%d", dig[i]);
		}
		printf("\n");

		if (dig[count - 1] == 0)
		{
			--count;
			continue;
		}
		int temp = dig[count - 1];
		for (i = count - 1; i > 0; --i)
		{
			dig[i] = dig[i - 1];
		}

		dig[i] = temp;

		++k;
	} while (k <= n);

	

	return 0;
}

