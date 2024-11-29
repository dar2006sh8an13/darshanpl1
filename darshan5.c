//write a program to display the grade base on marks.
#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>=90){
        printf("grade:A\n");
    }
    else if(marks>=75){
        printf("grade:B\n");
    }
    else if(marks>=50){
        printf("grade:C\n");
    }
    else{
        printf("grade:F\n");
    }
    return 0;
}