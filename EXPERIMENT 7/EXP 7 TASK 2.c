
/*Name: Mahto Nitesh Khemnarayan
 Class:AI&DS
  UIN: 241A044
  Roll no: 36
  AIM:WAP to calculate sum of two matrix.*/

#include<stdio.h>

  int main(){
      int arr1[50][50],brr1[50][50],crr1[50][50], i, j, n;
      printf("\n\nAddition of two Matrics:\n");
      printf("--------------\n");
      printf("Input the size of the Matrix:");
      scanf("%d",&n);

      printf("Input elements in the first matrix:\n");
      for(i=0;i<n;i++){
        for(j=0; j<n; j++){
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&arr1[i][j]);

      }
     printf("Input elements in the seconf matrix:\n");
      for(i=0;i<n;i++){
        for(j=0; j<n; j++){
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&brr1[i][j]);
        }

       printf("Input elements in the second matrix:\n");
      for(i=0;i<n;i++){
        for(j=0; j<n; j++){
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&crr1[i][j]);
        }
      }
printf("\nThe Addition of two matrix is : \n");
for (i = 0; i < n; i++) {
printf("\n");
for (j = 0; j < n; j++)
printf("%d\t", crr1[i][j]);

}
printf("\n\n");

  }



      }
  }
