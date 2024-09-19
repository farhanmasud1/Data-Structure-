#include<stdio.h>
int main()
{
    int arr[100],search,i,n;
    printf("Enter the number of n: ");
    scanf("%d",&n);

    printf("Enter %d number:\n",n);


    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Enter the search value: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("%d is located at %d position\n",search,i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("%d is not located in this array\n",search);
    }

    return 0;



}
