/* Assignment 1B.cpp : This program stores integer values in two variables and calulates their total and average*/
/*Aurora DiPeso
University ID 0663597
Thomas Edison State University
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


