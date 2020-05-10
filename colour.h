#ifndef _COLOUR_H_
#define _COLOUR_H_


# define N 128


typedef struct colour
{

	int r;
	int g;
	int b;
} Colour;

/* function declarations */
void initColour(Colour* c, int r, int g, int b);
Colour averageColour(Colour c[], int n);
double brightness(Colour* c);
void printColour(Colour* c);

#endif

