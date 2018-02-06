#include<stdio.h>
void main()
{
    int A[20],i,num,loc,item;
    printf("Insert the number of values (1-11): ");
    scanf("%d",&num);
    printf("Input numbers: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the location: ");
    scanf("%d",&loc);
    printf("Enter the value: ");
    scanf("%d",&item));

    for(i=num;i>loc;i--)
    {
        A[i]=A[i-1];
    }
    A[loc]=item;
    printf("The new values are: ");
    for(i=0;i<num+1;i++)
    {
        printf("%d",A[i]);
    }
}
