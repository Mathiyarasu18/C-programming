
#include<stdio.h>
#include<stdint.h>

struct Dataset
{

	char data1;
	int data2;
	char data3;
	short data4;
};

int main()
{
	struct Dataset data;

	data.data1= 0x45;
	data.data2= 0xffffeeee;
	data.data3= 0x22;
	data.data4= 0xabcd;

	uint8_t* pData;
	pData =(uint8_t*)&data;
	uint32_t size_of_variable = sizeof(data);

	printf("The address and content of the variable\n");

	for (uint32_t i=0;i<size_of_variable;i++)
	{
	  printf("%p --------------- %x\n",pData,*pData);
	  pData++;
	}

    printf("The size of the Structure variable is %u ", sizeof(data));

    return 0;
}
