#include<stdio.h>
int main(void)
{
    int a = 76;
    int *ptr = &a;
    printf("Address of pointer to a = %x\n",&ptr);
    printf("Address of a = %x\n",ptr/*or &a*/);
    printf("Address of a = %x\n",&a);
    printf("Value of a = %x\n",*ptr);
    printf("Value of a = %x\n",a);
}