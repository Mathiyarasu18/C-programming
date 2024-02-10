//Separated nested Structure
#include <stdio.h>

struct var
{
	short Date;
	short month;
	int year;
}var_doj;

struct Employee
{
	int Age;
	int employeeId;
	struct var var1;
}var_Employee;

int main()
{

	var_Employee.Age = 30;
	var_Employee.employeeId = 123456;
	var_Employee.var1.Date = 20;
	var_Employee.var1.month = 12;
	var_Employee.var1.year = 2012;

	printf("Employee Age:%d\n",var_Employee.Age );
	printf("Employee ID:%d\n",var_Employee.employeeId );
	printf("Date of joining:%d\n",var_Employee.var1.Date);
	printf("Month of joining:%d\n",var_Employee.var1.month);
	printf("Year of joining:%d\n",var_Employee.var1.year);

	return 0;
}

