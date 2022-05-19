/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int k,l;
 float ave;
  printf("enter the first number : ");
  scanf("%d",&k);

  printf("enter the second number : ");
  scanf("%d",&l);
   ave=(float)k+l/2;

  printf("average is : %.2f",ave);

  
  
  return 0;
}

