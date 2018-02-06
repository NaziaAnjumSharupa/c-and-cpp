#include<stdio.h>
#include<string.h>
main()
{
    char name[50];
    char street[50];
    char city[50];
    int pin_code,door_no;
    printf("Enter your name:");
    scanf("%s",&name);



    printf("Enter your door no:");
    scanf("%d",&door_no);
    printf("Enter your street name: ");

    scanf("%s",&street);
    printf("Enter your city:");
    scanf("%s",&city);
    printf("Enter your pin code:");
    scanf("%d",&pin_code);

    printf("First line: %s \n",name);
    printf("Second line: %d,%s \n",door_no,street);
    printf("Third line: %s,%d ",city,pin_code);

}
