/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float n1, n2; float avg; float tot;        /*declaring two vaiables for entering the two marks and one vairable for finding average and another for finding
                                                total.*/
	printf("Enter mark 1 ");                  // First prompt for entering mark 1.
	scanf("%f", &n1);                         // code to get the mark 1.
	printf("Enter mark 2 ");                  // Second prompt for entering mark 2.
	scanf("%f", &n2);                         // code to get the mark 2.
	tot= n1+n2;                               // finding total in order to find average.
	avg= tot/2;                               // finding average by using previously found total divided by the number of values entered by the user.
	
	printf("The average is %.1f", avg);       // printing the found average.
   return 0;
}

