#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int* arr,int n)
{
    for(int i = n-1;i>=1;i--)
    {
        for(int j = 0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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

    bubbleSort(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


}