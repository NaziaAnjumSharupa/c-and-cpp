#include<stdio.h>
void main()
{
   int A[20],max,loc,i,num;
    printf("Insert the number of values (1-11): ");
    scanf("%d",&num);
    printf("Input numbers: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }
    max=A[0];
    for(i=1;i<num;i++)
    {
       if(max<A[i])
       {
        max=A[i];
       loc=i;
       }
    }
    printf("The maximum value is: %d and the location is %d: ",max,loc);
}
