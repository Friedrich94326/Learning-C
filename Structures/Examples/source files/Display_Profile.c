#include <stdio.h>
#include "my_student.h"

void display_profile(struct student *John)
{
	/*
	struct student* ptr = &John;
	printf("Name: %s\n", ptr->name);
	printf("Studnet ID no.: %s\n", ptr->id);
	printf("Phone No.: %s\n", ptr->phone);
	printf("Date of birth (dd/mm/yy): %d/ %d/ %d\n", ptr->birth_day, ptr->birth_month, ptr->birth_year);
	printf("University: %s\n", ptr->Uni);
	printf("Educational degree: %s\n", ptr->EduDeg);
	printf("Major: %s\n", ptr->major);
	*/

	printf("Name: %s\n", John->name);
	printf("Studnet ID no.: %s\n", John->id);
	printf("Phone No.: %s\n", John->phone);
	printf("Date of birth (dd/mm/yy): %d/ %d/ %d\n", John->birth_day,John->birth_month, John->birth_year);
	printf("University: %s\n", John->Uni);
	printf("Educational degree: %s\n", John->EduDeg);
	printf("Major: %s\n", John->major);

	return;
}