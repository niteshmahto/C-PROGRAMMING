/* Aim: WAP to find the factorial of a number using iterative and recursive function.
Name:Mahto Nitesh Khemnarayan
UIN: 241A044
Roll no: 36
DIV: A
Branch: AI & DS */
#include <stdio.h>
int factorialRecursive(int num){
if(num <=1){
return 1;
}
return num *factorialRecursive(num-1);}

int main(){
int num;
printf("\t\t\t***Recursive Factorial Function***\n\n");
printf("Enter Number:");
scanf("%d", &num);
printf("Factorial of %d is %d", factorialRecursive(num));
return 0;
}
