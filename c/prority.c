#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int n;
    printf("No of Process : ");
    scanf("%d",&n);
    int AT[n],BT[n],PR[n],CT[n],WT[n],TAT[n],RBT[n];
    printf("Enter Arrival Time, Burst Time and Priority of each process\n");
    for(int i=0;i<n;i++){
        printf("Process [%d] : ",i);
        scanf("%d %d %d",&AT[i],&BT[i],&PR[i]);
        RBT[i] = BT[i];
    }

    float avgWT=0.0,avgTAT=0.0;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(*(AT+j)>*(AT+j+1)){
                swap((AT+j),(AT+j+1));
                swap((BT+j),(BT+j+1));
                swap((PR+j),(PR+j+1));
            }
        }
    }
    int flag[n];

    for(int i=0;i<n;i++){
        flag[i] = 0;
    }

    int time = AT[0],min,k;


    for(int j = 0;j<n;j++){
        min = 100;
        k = 0;
        for(int i=0;i<n;i++){
            if(flag[i]==0 && AT[i]<=time && PR[i]<min){
                min = PR[i];
                k = i;
            }
        }
        
        CT[k] = time + BT[k];
        time = time+BT[k];
        flag[k] = 1;
        WT[k] = CT[k] - (BT[k]+AT[k]);
        TAT[k] = CT[k] - AT[k];
        avgTAT += TAT[k];
        avgWT += WT[k];
    }

    avgWT = avgWT/n;
    avgTAT = avgTAT/n;

    printf("Process\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0;i<n;i++){
        printf("P[%d]\t%d\t%d\t%d\t%d\t%d\n",i,AT[i],BT[i],CT[i],TAT[i],WT[i]);
    }
    printf("Average Waiting Time : %f\n",avgWT);
    printf("Average Turn Around Time : %f\n",avgTAT);
}