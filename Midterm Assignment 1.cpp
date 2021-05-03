/*Write a program that requires the user to enter two floating-point numbers (num1 and num2) from the keyboard. 
Multiply them and display the original two numbers and the calculated floating-point product. 
When displaying the floating-point numbers, limit your output display to 3 digits after the decimal point (for example, display 23.567810 as 23.568). */        


// Midterm Assignment 1.cpp : This program asks the user to enter two floating point numbers. It then multiplies them and displays the original number and the product
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


