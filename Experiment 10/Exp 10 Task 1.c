/*Name:Mahto Nitesh Khemnarayan
UIN: 241A044
Roll no: 36
DIV: A
Branch: AI & DS
AIM:WAP to add two numbers using pointers. */


#include <stdio.h>
int main(){
int num1, num2, sum;
int *ptrl, *ptr2;

printf("\t\t**Addition using Pointers**\n\n");
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter Second number:");
scanf("%d",&num2);

ptrl =&num1;
ptr2 =&num2;

sum = *ptrl + *ptr2;

printf("sum of %d and %d is: %d\n", num1,num2,sum);
return 0;

}
