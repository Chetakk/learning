#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int main(void){
    printf("Hello! \n");
    fork();
    printf("Child Procees ID : %d \n",getpid());
    printf("Parent Procees ID : %d \n",getppid());
}