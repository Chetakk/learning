#include<stdio.h>

int nSum(int n)
{
    if(n==0)return 0;
    int res = n + nSum(n-1);
    return res;
}
int main(void)
{
    int num,sum;
    printf("Enter the number : ");
    scanf("%d",&num);
    sum=nSum(num);
    printf("The sum first %d numbers : %d",num,sum);
}