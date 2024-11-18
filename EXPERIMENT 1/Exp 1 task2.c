//Name: Mahto Nitesh Khemnarayan  Class:AI&DS  UIN: 241A044


#include <stdio.h>
int main()
{
int p,c,m,avg;
   printf("Enter Physics marks:");
   scanf("%d",&p);
    printf("Enter Chemistry marks:");
    scanf("%d",&c);
     printf("Enter Maths marks:");
     scanf("%d",&m);
     avg=(p+c+m)/3;
     printf("\npcm Average =%d",avg);
     avg >=50? printf("\n Eligible for admission"): printf("\n Not Eligible for Admission");
     return 0;
}

/* output

Enter Physics marks:76
Enter Chemistry marks:67
Enter Maths marks:78

pcm Average =73
 Eligible for admission


