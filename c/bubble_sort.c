#include<stdio.h>


void printarr(int* a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void bubble(int* a,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void insertion(int* a,int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}


void selection(int* a,int n)
{
    int inmin,temp;
    printf("Running Selection Sort.......\n");
    for(int i=0;i<n-1;i++)
    {
        inmin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[inmin])
            {
                inmin=j;
            }
        }
        temp = a[i];
        a[i] = a[inmin];
        a[inmin] = temp;
    }
}

int linear(int* a,int size,int search)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==search)
        {
            
        }
    }
}


int main()
{
    int a[]={5,4,7,8,9,6,3};
    int n=7;
    int s=9;
    printarr(a,n);
    selection(a,n);
    printarr(a,n);
}