#include<stdio.h>
#include<stdlib.h>

void selectionSort(int* arr,int n)
{
    for(int i = 0;i<n-1;i++)
    {
        int mini = i;
        for(int j = i;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int *arr = (int*)calloc(n,sizeof(int));

    for(int i=0;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        arr[i]=num;
    }

    selectionSort(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


}