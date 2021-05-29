/*Write a C program to determine whether the year entered from the keyboard is a leap year. 
Display a message indicating whether the year is or is not a leap year. 
To calculate this problem, a year is a leap year if it is evenly divisible by 4 and not by 100, 
or if it is evenly divisible by 400. Check the remainder of the division statements by using the % function. 
(Hint: It may help to have three variables, each one holding the remainder of each of the division problems.) 
(To check your work, legal leap years are 1952, 1964, 1988, and 2004. Years 1953, 1966, 1990, and 2007 are not leap years.)*/

/* This program determines if a year entered by the user is a leap year and displays a message indicating if it is or not */

/*Thomas Edison State University
C Programming COS-116
OL-009 2019OCT*/

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int userYear;//declares integer variable userYear

	printf("Please enter a Year:\n"); //instructs user to enter a year
	scanf_s("%d", &userYear); //gets user input from the keyboard and stores in variable userYear

	if ((userYear % 400) == 0)// if the year is divisible by 400 with no remainder, display message it is a leap year
		printf("%d is a leap year \n", userYear);
	else if ((userYear % 100) == 0) //if the year is divisble by 100 with no remainder, display message it is not a leap year
		printf("%d is not a leap year \n", userYear);
	else if ((userYear % 4) == 0)//if the year is divisble by 4 with no remainder, display message it is a leap year
			printf("%d is a leap year \n", userYear);
	else
		printf("%d is not a leap year \n", userYear); // if none of the other if statements are satisfied, display message it is not a leap year

	return 0;
}
		


