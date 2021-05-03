/*Write a program that contains the function measure() that is to accept a long integer number total and the addresses
of the integer variables inches, feet, yards, and miles. The passed long integer represents the total number of inches, 
and the function is to determine the number of miles, yards, feet, and inches in the passed value, 
writing these values directly into the respective variables declared in the calling function.

This function will be called from the main program and when it returns to main, 
it will print out the values of inches, feet, yards, and miles.

Use the relationships:
inch
foot (12 inches)
yard (36 inches; 3 feet)
mile (5280 feet; 1760 yards; 63,360 inches)
*/

// Midterm Assignment 3.cpp : This program accepts a total number of inches input by the user, then calculates and displays the total number of feet, yards, and miles

//Thomas Edison State University
//C Programming: COS-116
//Section no.: OL009
//Semester & Year: 2019OCT

#include <stdio.h>
#include <math.h>

//function declaration
void measure(long int, int*, int*, int*, int*);

//function definition
void measure(long int total, int* inches, int* feet, int* yard, int* miles)
{
	*inches = total;
	*feet = total / 12;
	*yard = total / 36;
	*miles = total / 63360;

}
main()
{
	long int total;
	int  inches, feet, yard, miles;

	int userInches;//user input
	printf("Enter the value in inches:\n");
	scanf_s("%d", &userInches);//assign input to userInches variable
	measure(userInches, &inches, &feet, &yard, &miles);

	printf("inches:%d\nfeet:%d\nyards :%d\nmiles:%d\n", inches, feet, yard, miles);//print number of inches, ft, yard, mi

}

