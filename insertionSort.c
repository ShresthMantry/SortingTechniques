#include<stdio.h>
#include<stdlib.h>

void insertionSort(int* arr,int n)
{
    for(int i = 0;i<n;i++)
    {
        int j = i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }

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

    insertionSort(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


}