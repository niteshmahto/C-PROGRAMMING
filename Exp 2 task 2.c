
/*Name: Mahto Nitesh Khemnarayan 
Class:AI&DS 
Roll no:36
UIN: 241A044

Aim: WAP to find sum of all odd numbers between two numbers entered by user*/

#include <stdio.h>

int main() {
    int start, end, sum = 0;


    printf("*** Sum of Odd Numbers ***\n");


    printf("Enter Start Number: ");
    scanf("%d", &start);

    printf("Enter Ending Number: ");
    scanf("%d", &end);


    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }


    printf("Sum of all the Odd Numbers between %d and %d = %d\n", start, end, sum);


    return 0;

}
/* ***Output***
*** Sum of Odd Numbers ***
Enter Start Number: 1
Enter Ending Number: 5
Sum of all the Odd Numbers between 1 and 5 = 9
*/


