#ifndef _MY_STUDENT_H_
#define _MY_STUDENT_H_




#define NameLength 20
#define NumCourses 4
#define PlaceLength 20


/* declaration of a struct variable */




struct student
{
	char name[NameLength];
	char id[9];
	char phone[10];
	float grade[NumCourses];
	int birth_year;
	int birth_month;
	int birth_day;
	char lover[NameLength];
	char birthplace[PlaceLength];
	char major[15];
	char EduDeg[10];
	char Uni[5];
};


/* declaration of functions required*/
void display_profile(struct student* John);


#endif