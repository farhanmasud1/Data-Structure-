#include<stdio.h>

int main()
{
    int arr[50],n,i,j,k,temp,b;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    for(b=0; b<n-1; b++)
    {
        for(k=0; k<n-1; k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    for(j=0; j<n; j++)
    {
        printf("%d\t",arr[j]);
    }
    return 0;
}

