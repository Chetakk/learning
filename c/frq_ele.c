#include<stdio.h>
int main (void)
{
    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[size],freq_arr[size];
    printf("Enter the array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        int count = 1;
        for (int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
            }
            if(arr[i]!=-1)
            {
                freq_arr[i]=count;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=-1)
        {
            printf("Freq of %d = %d\n",arr[i],freq_arr[i]);
        }
    }
}