/*Create a set/list of enumerated constants called week that contains the days of the week. 
Have a variable called today that is of type week. Assign a value to today. 
If the day is Monday through Friday, print "Go to work!" If the day is Saturday or Sunday, print "You can rest today!"
*/

// Written Assignment 6B.cpp : A program that accepts user input corresponding to days of the week and indicates if it
//is a work day or rest day. 

//Thomas Edison State University
//C Programming: COS-116
//Section no.: OL009
//Semester and Year: 2019OCT

#include <iostream>
#include <stdio.h>

//create enumerated list
enum week { Mon=1, Tue, Wed, Thr, Fri, Sat, Sun };
int main()
{
	enum week today;

	//request for user input
	printf("Enter the number corresponding to the day of the week (see below)");
	printf("\n(Monday = 1, Tuesday = 2...Sunday = 7): ");
	scanf_s("%d",  &today);//assign input to today

	//beginning of switch statement
	switch (today)
	{
	case 1: today = Mon;
		break;
	case 2: today = Tue;
		break;
	case 3: today = Wed;
		break;
	case 4: today = Thr;
		break;
	case 5: today = Fri;
		break;
	case 6: today = Sat;
		break;
	case 7: today = Sun;
		break;
	}
	if (today > 1 && today < 6)//if number is greater than one and less than 6 it is a work day
		printf("\nGo to Work!");
	else if (today == 6 || today == 7)// if input is equal to 6 or 7 it is a rest day
		printf("\nYou can rest today!");
	else	
		printf("\nInvalid Input. Please enter a number between 1 and 7.");//prints error message if the number is not between 1 and 7

	return 0;
}

