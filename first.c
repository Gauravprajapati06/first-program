/*program to add two numbers*/

#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    printf("enter 3 numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("the sum of the 3 numbers is  %d",sum);
    return 0;
}
