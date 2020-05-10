#ifndef _COMPLEX_H_
#define _COMPLEX_H_

struct complex
{
	int real;
	int imag;
};

typedef struct complex Complex;
//  assigns alternatives names to existing datatypes
//  this allows us to declare variables directly with typing 'Complex' instead of 'struct complex'

#endif