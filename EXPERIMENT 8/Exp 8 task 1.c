
/* Aim: WAP to find the length of a string without using library function.
Name:Mahto Nitesh Khemnarayan
UIN: 241A044
Roll no: 36
DIV: A
Branch: AI & DS */
#include<stdio.h>
int main(){
char str[100];
int length =0;
printf("\t\t***String length Finder ***\n\n");
printf("Enter Your String:");
gets(str);
while (str[length] !='\0'){
length++;}
printf("String Length:%d charachters", length);
return 0;

}
