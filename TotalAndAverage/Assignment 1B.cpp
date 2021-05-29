/*Write a C program that stores the integer value 5 in the variable save1 and the integer value 2 in the variable save2. 
(Make sure to declare the variables as integers.) Have your program calculate the total of these numbers and their average. 
The total should be stored in the variable named total and the average in the variable named average. 
(Use the statement average = total/2.0; to calculate the average.) Use the printf() function to display the total and average.*/

/* Assignment 1B.cpp : This program stores integer values in two variables and calulates their total and average*/
/*Thomas Edison State University
C Programming COS-116
OL-009 2019OCT*/

#include <iostream>
#include <stdio.h>

int main()
{
	float save1, save2, total, average; /*declare input and output items*/

	save1 = 5.0; /*set values for save1 and save2*/
	save2 = 2.0;
	total = save1 + save2; /*calculate the total*/
	average = total / 2.0; /*calcluate the average*/

	printf("The total value is %f\n", total); /*display the total and average*/
	printf("The average value is %f\n", average);

	return 0;
}


