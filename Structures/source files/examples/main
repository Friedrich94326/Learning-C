#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_student.h"
#include "my_complex.h"
#include "complex.h"



/* Prototypes of functions- could be placed alternatively in a header file*/

/*
void display_profile(struct student* John);
struct complex add_complex(struct complex a, struct complex b);
struct complex multi_complex(struct complex a, struct complex b);
double norm_complex(struct complex a);
void print_complex(struct complex a);
*/


/* struct in struct */
typedef struct date
{
	int year;
	int month;
	int day;
} Date;

typedef struct personal_data
{
	char name[20];
	char id[10];
	char phone[10];
	Date birthday;
} Personal_Data;




int main(void)

	
	/* initialisation of a struct variable */

	/*
	struct student Friedrich = {
		"Friedrich Cheng",
		"L16061030",
		"0978260027",
		{98, 87, 95, 100},
		1994,
		3,
		26,
		"Christine",
		"Tainan",
		"mathematics",
		"master",
		"NCKU"
	};
	printf("size of Friedrich is %d \n", sizeof(Friedrich));

	*/

	/* assigning members in a struct */

	
	/* accessing structure members */

	/*
	struct student Christine;
	
	strcpy_s(Christine.name, sizeof(Friedrich.name), "Christine Lai");
	strcpy_s(Christine.Uni, sizeof(Christine.Uni), Friedrich.Uni);

	printf("%s met and fell in love with %s in %s\n", Friedrich.name, Christine.name, Friedrich.Uni);
	*/

	/* Pointers to struct */

	/*
	strcpy_s(StuPtr -> birthplace, sizeof(Christine.birthplace), "Taichung");
	strcpy_s(StuPtr->major, sizeof(Christine.major), "Pharmacy");
	strcpy_s(StuPtr->EduDeg, sizeof(Christine.EduDeg), "Bachelor");
	strcpy_s(StuPtr->lover, sizeof(Christine.lover), "Friedrich");
	strcpy_s(StuPtr->phone, sizeof(Christine.phone), "0906288806");
	*/

	/*
	struct student* StuPtr = &Christine;
	StuPtr->birth_year = 2001;
	StuPtr->birth_month = 1;
	StuPtr->birth_day = 30;
	
	int i;
	for (i = 0; i < 4; i++)
	{
		StuPtr->grade[i] = 100;
	}


	//display_profile(&Friedrich);

	*/


	/* Example: Complex Numbers */


	/*
	struct complex z1, z2, z3;
	double norm1, norm2, norm3;

	printf("real part of z1: ");
	scanf_s("%lf", &(z1.Re));
	printf("imaginary part of z1: ");
	scanf_s("%lf", &(z1.Im));

	printf("real part of z2: ");
	scanf_s("%lf", &(z2.Re));
	printf("imaginary part of z2: ");
	scanf_s("%lf", &(z2.Im));



	z3 = add_complex(z1, z2);
	printf("z1 + z2 = %lf + %lf i \n", z3.Re, z3.Im);
	z3 = multi_complex(z1, z2);
	printf("z1 * z2 = %lf + %lf i \n", z3.Re, z3.Im);
	norm1 = norm_complex(z1);
	printf("norm of z1 = %lf \n", norm1);
	norm2 = norm_complex(z2);
	printf("norm of z2 = %lf \n", norm2);
	norm3 = norm_complex(z3);
	printf("norm of z3 = %lf \n", norm3);
	*/


	Personal_Data Gary =
	{
		"Gary Zheng", "D122651050", "0978260027", {1994, 3, 26}
	};

	printf("name is %s \n", Gary.name);
	printf("ID number is %s \n", Gary.id);
	printf("phone number is %s \n", Gary.phone);
	printf("birth year is %d; birth month is %d; birth day is %d\n", Gary.birthday.year, Gary.birthday.month, Gary.birthday.day );

	return 0;


}
