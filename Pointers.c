#include <stdio.h>

int main()
{
    int data = 600;
    
    int *pointer_variable;
    pointer_variable = &data;
    int value = *pointer_variable;
    printf("Address of data:%x\n ", &data);
    printf("The value in the pointer variable:%d", value);
    
    return 0;
}
