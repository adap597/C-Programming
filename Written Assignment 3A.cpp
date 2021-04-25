// Written Assignment 3A.cpp : This program generates a table of integer values and their squares ranging from 1 to 10
//Name: Aurora DiPeso
//University ID: 0663597
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

