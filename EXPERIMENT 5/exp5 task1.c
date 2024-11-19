/* Aim: WAP to find the factorial of a number using iterative and recursive function.
Name:Mahto Nitesh Khemnarayan
UIN: 241A044
Roll no: 36
DIV: A
Branch: AI & DS */

#include <stdio.h>
int factorialIterative (int num){
    int prod=1,i;
    for(i=1; i <=num; i++){
        prod*=i;

    }

return prod;

}
 int main(){
 int num;
 printf("\t\t\t***Iterate Factorial Functions***\n\n");
 printf("Enter Number:");
 scanf("%d",&num);
 printf("Factorial of %d is %d",num,factorialIterative(num) );
 return 0;

 }
