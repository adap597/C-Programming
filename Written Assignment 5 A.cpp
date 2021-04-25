// Written Assignment 5 A.cpp : This program accepts user input of an integer, floating point number and character. The inputs 
//are combined into a string and displayed. 

//Name: Aurora DiPeso
//University ID: 0663597
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