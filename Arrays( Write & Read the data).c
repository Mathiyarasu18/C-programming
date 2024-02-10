#include<stdio.h>
#include<stdint.h>

int main()
{
	uint8_t Data[5] = {0xF1, 0xF2, 0xF3, 0xF4, 0xF5};

	//Write the data

	*(Data+2)= 0xFF;

	//Read the data
	for(uint32_t i=0; i<5;i++)
	{
		printf("%x \n",Data[i]);
	}

	return 0;
}
