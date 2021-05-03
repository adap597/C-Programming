//Write a program to generate and display a table of n and n2, for integer values of n ranging from 1 through 10. Be sure to print appropriate column headings.

// Written Assignment 3A.cpp : This program generates a table of integer values and their squares ranging from 1 to 10
//Thomas Edison State University
//C Programming: COS-116
//Section No.: OL009
//Semester & Year: 2019OCT

#include <iostream>
#include <stdio.h>

int main()
{
#define TABLESIZE 10//sets the table size
	int nums;

	printf("NUMBER SQUARE\n");
	printf("------ ------\n");

	for (nums = 1; nums <= TABLESIZE; nums++)//initial value is 1. Loop repeats until num is less than or equal to TABLESIZE 10
		printf("%3d %7d\n", nums, nums * nums);//prints the integer and its square in the table

	return 0;
}

