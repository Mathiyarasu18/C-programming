
#include<stdio.h>
#include<stdint.h>

int main()
{
	uint8_t len = 20;
	uint8_t Numbers[len];

	for(uint32_t i=0;i<len;i++)
	{
		Numbers[i] = i+2;
	}

	//length of an array

	uint32_t Length = sizeof(Numbers)/sizeof(uint8_t);

	printf("The size of the Array:%d\n",Length );

	//Printing the array element

	for(uint32_t i=0;i<len;i++)
	{
		printf("%d\n",Numbers[i]);
	}

	return 0;
}
