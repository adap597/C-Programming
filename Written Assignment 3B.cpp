// Written Assignment 3B.cpp : This program determines the amount of gallons, quarts, pints, and cups are contained in the value provided by the user (total cups)
//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C Programming: COS-116
//Section No.: OL009
//Semester & Year: 2019OCT

#include <iostream>
#include <stdio.h>
#include <math.h>

void liquid(int, int*, int*, int*, int*);//function prototype

int main()
{
	int num1, gallons, quarts, pints, cups;//declare variables

	printf("Enter the total number of cups: ");//request and receive user input
	scanf_s("%2d", &num1);

	liquid(num1, &gallons, &quarts, &pints, &cups);//function call

	return 0;
}

void liquid(int x, int*gallons, int*quarts, int*pints, int*cups)//function header
{//calculation 
	*cups = x;
	*cups -= (*gallons = *cups / 16) * 16;
	*cups -= (*quarts = *cups / 8) * 8;
	*cups -= (*pints = *cups / 4) * 4;

	printf("The number of gallons is %d\n", *gallons);
	printf("The number of quarts is %d\n", *quarts);
	printf("The number of pints is %d\n", *pints);
	printf("The number of cups is %d\n", *cups);

	return;
}
