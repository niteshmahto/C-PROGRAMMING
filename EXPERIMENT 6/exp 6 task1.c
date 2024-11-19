/*Name: Mahto Nitesh Khemnarayan
 Class:AI&DS
  UIN: 241A044
  Roll no: 36
  AIM: WAP to define a counter function to print how many times the function is called use storage classes.
*/


#include <stdio.h>
void counter(){
static int count = 0;
count++;
printf(" Counter function called:%d\n",count);

}
int main()
{
    int i;
printf("\t\t\t***storage class***\n\n");
for(i=1;i<=36;i++){
        counter();
    }
    return 0;
}






