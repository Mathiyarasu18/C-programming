// Embedded Nested Structure

#include <stdio.h>

struct Employee
{
	int Age;
	int employeeId;

	struct{
		short Date;
		short month;
		int year;
	}var_doj;

}var_Employee;

int main()
{

	var_Employee.Age = 30;
	var_Employee.employeeId = 123456;
	var_Employee.var_doj.Date = 20;
	var_Employee.var_doj.month = 12;
	var_Employee.var_doj.year = 2012;

	printf("Employee Age:%d\n",var_Employee.Age );
	printf("Employee ID:%d\n",var_Employee.employeeId );
	printf("Date of joining:%d\n",var_Employee.var_doj.Date);
	printf("Month of joining:%d\n",var_Employee.var_doj.month);
	printf("Year of joining:%d\n",var_Employee.var_doj.year);

	return 0;

}

