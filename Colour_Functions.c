#include <stdio.h>
#include <stdlib.h>
#include "colour.h"

void initColour(Colour* c, int R, int G, int B)
{
	c->r = R;
	c->g = G;
	c->b = B;

	return;
}

Colour averageColour(Colour c[], int n)
{
	Colour avgC;
	int i;

	for (i = 0, avgC.r = 0, avgC.g = 0, avgC.b = 0; i < n; i++)
	{
		avgC.r += c[i].r;
		avgC.g += c[i].g;
		avgC.b += c[i].b;
	}

	avgC.r /= n;
	avgC.g /= n;
	avgC.b /= n;

	return avgC;
}

double brightness(Colour* c)
{
	double mu;
	mu = (double) (c->r + c->g + c->b) / 3;
	return mu;
}

void printColour(Colour* c)
{
	
	
	printf("RGB = (%d, %d, %d), ", c->r, c->g, c->b);
	printf("brightness = %lf \n ", brightness(c));

	return;
}