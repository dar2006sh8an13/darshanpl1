//create aprogram to check whether an year is leap or not
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if((year%4==0 && year%100!=0)||(year%400=0))
    {
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d is not leap year\n",year);
    }
    return 0;
}