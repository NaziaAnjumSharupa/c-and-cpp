#include<stdio.h>
#include<math.h>
#define pi 3.1416
void main()
{
    int radius,result;
    printf("Enter the radius of a circle :");
    scanf("%d",&radius);
    result=pi*pow(radius,2);
    printf("The are of a circle : %d",result);
}
