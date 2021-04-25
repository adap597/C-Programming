// Midterm Assignment 1.cpp : This program asks the user to enter two floating point numbers. It then multiplies them and displays the original number and the product
//Name: Aurora DiPeso
//University ID:0663597
//Thomas Edison State University
//C Programming:COS-116
//Section no.:OL009
//Semester and Year: 2019OCT

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float num1, num2, product;//declare float variables

	printf("Enter an integer: ");//request for user input
	scanf_s("%f", &num1);//accept user input and assign to variables num1 and num2
	printf("Enter another integer: ");
	scanf_s("%f", &num2);

	printf("The numbers you entered were %2.3f\n and %2.3f\n", num1, num2);//print original user input

	product = num1 * num2;//calculate the product and assign to variable product

	printf("The product equals %2.3f\n", product);//print the product in the terminal window

	return 0;
}


