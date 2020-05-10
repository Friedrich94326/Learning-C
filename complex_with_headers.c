#include <stdio.h>
#include "complex.h"

void Add_Complex(Complex* a, Complex* b, Complex* c)
{
	c->real = a->real + b->real;
	c->imag = a->imag + b->imag;
	return;
}

void Multi_Complex(Complex* a, Complex* b, Complex* c)
{
	c->real = a->real * b->real - a->real * b->imag;
	c->imag = a->real * b->imag + a->imag * b->real;
	return;
}

void PrintOut_complex(Complex* a)
{
	printf("%d + i %d \n", a->real, a->imag);
	return;
}

