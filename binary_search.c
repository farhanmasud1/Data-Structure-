#include<stdio.h>
int main()
{
    int arr[50],n,i,beg,end,mid,value;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you looking for: ");
    scanf("%d",&value);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end)
    {
        if(arr[mid]<value)
        {
            beg=mid+1;
        }
        else if(arr[mid]==value)
        {
            printf("%d is found at the location %d",value,mid+1);
            break;
        }
        else
            end=mid-1;
        mid=(beg+end)/2;
    }
    if(beg>end)
        printf("%d is not found in the array.",value);
    return 0;
}

