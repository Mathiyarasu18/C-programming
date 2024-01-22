#include <stdio.h>

long long int data = 0xfffeabcd11112345;

int main()
{
	char* pAddress;

	pAddress =(char*) &data;

	printf("Address of the data: %p\n",&data);

	printf("The data stored in the address %p is %x\n",pAddress,*pAddress);

	pAddress = pAddress+1;
	printf("The data stored in the address %p is %x\n",pAddress,*pAddress);

	pAddress = pAddress+1;
	printf("The data stored in the address %p is %x",pAddress,*pAddress);
	return 0;
}
