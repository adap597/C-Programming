// Midterm Assignment 3.cpp : This program accepts a total number of inches input by the user, then calculates and displays the total number of feet, yards, and miles
//Name: Aurora DiPeso
//University ID: 0663597
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

