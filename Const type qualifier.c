#include<stdio.h>
#include<stdint.h>

int main()
{
	uint8_t const data = 20;

	//data = 50;
	// The value of data is not changed. It shows an error
	printf("%d\n", data);

	//change the data value using pointer

	uint8_t *pointer_var;
	pointer_var = &data;
	*pointer_var = 50;
	printf("%d",data);

	return 0;


}
