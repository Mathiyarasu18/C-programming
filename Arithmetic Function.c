
#include<stdio.h>

void add();
void sub();
void mul();
void mod();
int a,b;
int main()
{
    printf("enter the value of first number:");
    scanf("%d", &a);
    printf("enter the value of second number:");
    scanf("%d", &b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    mod(a,b);
    
    return 0;
}

void add()
{
    printf("Addition of %d and %d:%d\n",a,b,a+b);
}

void sub()
{
    printf("Subtraction of %d and %d:%d\n",a,b,a-b);
}
void mul()
{
    printf("Multipication of %d and %d:%d\n",a,b,a*b);
}
void mod()
{
    printf("Remainder of %d and %d:%d",a,b,a%b);
}
