/*Ask the user to enter a digit between 0 and 9. Have the program print out the digit in words, for example:
Enter a digit between 0 and 9: 4
You entered the number four
Assume that the user will enter only a single digit. The user may accidentally enter a single character, and this should generate an error message.*/

/* WrittenAssignment2A.cpp : This program asks the user to enter a digit between 0 and 9. 
The program displays the number entered in words or an error message if input is outside parameters*/
/*Thomas Edison State University
C Programming COS-116
OL-009 2019OCT*/

#include <iostream>
#include <stdio.h>

int main()
{
	int usernum;//declares integer variable usernum

	printf("Please enter a digit between 0 and 9: ");//displays message and requests user input
	scanf_s("%d", &usernum);//gets input from keyboard and assigns to variable usernum

	if (usernum == 0)//if else statement chain that displays the number entered as words
		printf("You entered the number zero");
	else if (usernum == 1)
		printf("You entered the number one");
	else if (usernum == 2)
		printf("You entered the number two");
	else if (usernum == 3)
		printf("You entered the number three");
	else if (usernum == 4)
		printf("You entered the number four");
	else if (usernum == 5)
		printf("You entered the number five");
	else if (usernum == 6)
		printf("You entered the number six");
	else if (usernum == 7)
		printf("You entered the number seven");
	else if (usernum == 8)
		printf("You entered the number eight");
	else if (usernum == 9)
		printf("You entered the number nine");
	else
		printf("Invalid entry");//error message if input is not 0 to 9

	return 0;

	

}


