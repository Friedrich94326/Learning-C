#ifndef _GRADE_H_
#define _GRADE_H_

struct student
{
	int grade[20];
	int count;
};

float average_grade(struct student* std_ptr);

#endif
