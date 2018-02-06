#include<stdio.h>
void main()
{
    int n,loc,A[20],i;
    printf("Enter the values (1-11): ");
    scanf("%d",&n);
    printf("Input numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the index number to delete: ");
    scanf("%d",&loc);

    for(i=loc; i<n-1; i++)
    {
        A[i]=A[i+1];
    }
    printf("updated list : ");
    for(i=0; i<n-1; i++)
    {
        printf("%d ",A[i]);
    }
}
