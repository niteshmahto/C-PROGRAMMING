/* Aim: WAP to find all the prime numbers between two numbers.
Name:Mahto Nitesh Khemnarayan
UIN: 241A044
Roll no: 36
DIV: A
Branch: AI & DS */

#include<stdio.h>
int isPrimeNumber(int num);
int isPrimeNumber(int num){int i;
for(i=2; i<num; i++){
if(num% i == 0){
return 0;
}
}
return 1;
}
int main(){
int start_num,end_num,i;
printf("\t\t\t *** Prime Number Finder *** \n\n");
printf("Enter Starting Number:");
scanf("%d",&start_num);
printf("Enter Ending Number:");
scanf("%d", &end_num);
i = start_num<=1?2:start_num;
printf("Prime Numbers between %d and %d are:", start_num,end_num);
while(i<= end_num){
if(isPrimeNumber(i)){
printf("%d,",i);
}
i++;
}
return 0;

}
