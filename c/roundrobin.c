#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

struct P{
	int at, bt, st[20], wt, ft, tat, pos;
};

int quant;

int main() {
	int n, i, j;
	printf("enter the no. of processes: ");
	scanf("%d", &n);
	struct P p[n];
	
	printf("Enter the quantum \n");
	scanf("%d", &quant);

	printf("enter the process numbers \n");
	for(i = 0; i < n; i++)
		scanf("%d", &(p[i].pos));

	printf("enter the arrival time of processes \n");
	for(i = 0; i < n; i++)
		scanf("%d", &(p[i].at));

	printf("Enter the burst time of processes \n");
	for(i = 0; i < n; i++)
		scanf("%d", &(p[i].bt));

	int c = n;
	float time = 0, mini = INT_MAX, b[n], a[n];
	int index = -1;
	for(i = 0; i < n; i++) {
		b[i] = p[i].bt;
		a[i] = p[i].at;
		for(j = 0; j < 20; j++) {
			p[i].st[j] = -1;
		}
	}

	int tot_wt = 0, tot_tat = 0;
	bool flag = false;

	while(c != 0) {
		mini = INT_MAX;
		flag = false;
		for(i = 0; i < n; i++) {
			float p = time + 0.1;
			if(a[i] <= p && mini > a[i] && b[i] > 0) {
				index = i;
				mini = a[i];
				flag = true;
			}
		}
		if(!flag) {
			time++;
			continue;
		}

		j = 0;
		while(p[index].st[j] != -1) {
			j++;
		}
		if(p[index].st[j] == -1) {
			p[index].st[j] = time;
		}
		if(b[index] <= quant) {
			time += b[index];
			b[index] = 0;
		} else {
			time += quant;
			b[index] -= quant;
		}
		if(b[index] > 0) {
			a[index] = time + 0.1;
		}
		if(b[index] == 0) {
			c--;
			p[index].ft = time;
			p[index].wt = p[index].ft - p[index].at - p[index].bt;
			tot_wt += p[index].wt;
			p[index].tat = p[index].bt + p[index].wt;
			tot_tat += p[index].tat;
		}
	}

	printf("Process Number\tArrival Time\tBurst Time\tStart Time\tFinal Time\tWait Time\tTurnaround Time\n");
	for(i = 0; i < n; i++) {
		printf("%d\t\t%d\t\t%d\t\t", p[i].pos, p[i].at, p[i].bt);
		j = 0;
		while(p[i].st[j] != -1 && j < 20) {
			printf("%d ", p[i].st[j]);
			j++;
		}
		printf("\t%d\t\t%d\t\t%d\n", p[i].ft, p[i].wt, p[i].tat);
	}

	double avg_wt = tot_wt / (double)n;
	double avg_tat = tot_tat / (double)n;
	printf("The average wait time is: %lf\n", avg_wt);
	printf("The average turnaround time is: %lf\n", avg_tat);

	return 0;
}
