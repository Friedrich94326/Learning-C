#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

typedef struct employee
{
	int id;
	char first_name[32];
	char last_name[32];
	int boss_id;

} Employee;


int LayersCount(Employee* worker, Employee staff[], int n);

#endif
