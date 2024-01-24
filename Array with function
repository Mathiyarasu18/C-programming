#include<stdio.h>
#include<stdint.h>

void displayArray(uint32_t *pointer_var,uint32_t len);

int main()
{
	uint32_t Data[5] = {0xF1, 0xF2, 0xF3, 0xF4, 0xF5};

	uint32_t length = sizeof(Data)/sizeof(uint32_t);

	displayArray(Data,length);

	return 0;
}

void displayArray(uint32_t *pointer_var,uint32_t len)
{
	for(uint32_t i=0;i<len;i++)
	{
		printf("%x\n",pointer_var[i]);
	}
}
