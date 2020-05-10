#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_


struct complex
{
	double Re;
	double Im;
};

struct complex add_complex(struct complex a, struct complex b);
struct complex multi_complex(struct complex a, struct complex b);
double norm_complex(struct complex a);
void print_complex(struct complex a);


#endif