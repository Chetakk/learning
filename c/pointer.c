#include<stdio.h>
int main(void)
{
    int a = 76;
    int *ptr = &a;
    printf("Address of pointer to a = %p\n",&ptr);
    printf("Address of a = %p\n",ptr/*or &a*/);
    printf("Address of a = %p\n",&a);
    printf("Value of a = %p\n",*ptr);
    printf("Value of a = %d\n",a);

    //NULL pointer
    int *ptra=NULL;
    printf("The value of null pointer = %p",ptra);

}
