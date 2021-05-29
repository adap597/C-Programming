/*Write a C program that accepts as input from the keyboard a floating point number, an integer, and a character. 
Each of these inputs should be preceded by a prompt and stored using individual variable names. 
Have your program call a function that assembles the input data into a single string. 
Display the assembled string using the puts() call back in main after the function has completed.
*/

// Written Assignment 5 A.cpp : This program accepts user input of an integer, floating point number and character. The inputs 
//are combined into a string and displayed. 

//Thomas Edison State University
//C Programming: COS-116
//Section no.:OL009
//Semester and Year: 2019OCT

#include <stdio.h>
#include <string.h>	

int main()
{
	int i;

	float f;

	char c[30];

	char assembledString[100];

	printf("Enter the integer numbers\n");//User prompts

	scanf_s("%d", &i);

	printf("Enter the float number\n");

	scanf_s("%f", &f);

	printf("Enter the character\n");

	scanf_s("%s", &c);

	// sends formatted output to String

	sprintf_s(assembledString, "The total string is %d\t%f\t%s\t", i, f, c);

	puts(assembledString); //Display the assembled string

	return 0;

}
