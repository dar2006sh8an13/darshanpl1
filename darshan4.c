//program to calculate simple interest
#include<stdio.h>
int main()
{
    float principal,rate,time,interest;
    printf("enter principal,rate,and time");
    scanf("%f %f %f",&principal,&rate,&time);
    interest=(principal*rate*time)/100;
    printf("simple interest=%.2f\n",interest);
    return 0;
}