/* This program determines if a year entered by the user is a leap year and displays a message indicating if it is or not */
/*Aurora DiPeso
University ID 0663597
Thomas Edison State University
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
		


