#include <stdio.h>

struct Data
{
	char data1;
	short data2;
	int data3;
	float data4;
}var_1;

int main()
{
	int data5;
	var_1.data1 = 0x10;
	var_1.data2 = 0xffee;
	var_1.data3 = 0xffffabcd;
	var_1.data4 = 0xabcdfd;
	printf("%x \n", var_1.data1);

	struct Data *pointer_var;
	pointer_var = &var_1;

	pointer_var->data1 = 0x22;
	data5 = pointer_var->data1;
	printf("%x \n", var_1.data1);
	printf("%x", data5);

	return 0;

}
