#include<stdio.h>
void main()
{
   int i,A[20],n,item,mid;
       int beg=0,end=n-1;


   printf("Enter the number of values(1-11): ");
    scanf("%d",&n);
    printf("Enter numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the item to find: ");
    scanf("%d",&item);
    mid=(beg+end)/2;
    while(item!=A[mid] && beg<=end)
    {
        if(item<A[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(item==A[mid])
    {
        printf("The item is found in location: %d ",mid);
    }
    else
    {
        printf("The item is not found! ");
    }
}
