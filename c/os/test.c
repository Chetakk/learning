#include<stdio.h>
#include<stdlib.h>

int main(void){
    int RQ[100],i,n,THM=0,intial;
    printf("Enter the number of requests\n");
    scanf("%d",&n);
    printf("Enter the Request Sequence \n");
    for(i = 0;i<n;i++)
    scanf("%d",&RQ[i]);
    printf("Enter the Initail position \n");
    scanf("%d",&intial);

    for(i = 0; i<n;i++){
        THM=THM+abs(RQ[i]-intial);
        intial = RQ[i];
    }

}