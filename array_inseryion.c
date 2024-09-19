#include<stdio.h>
int main()
{
    int arr[100],i,n,loc,item;
    printf("Enter the number of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Enter the location of the array: ");
    scanf("%d",&loc);
    printf("Enter the value of the item you want to insert: ");
    scanf("%d",&item);
    for(i=n;i>=loc-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[loc-1]=item;
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}
