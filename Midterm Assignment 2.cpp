// Midterm Assignment 2.cpp : This program asks the user to enter a variable number of integers.
//Once the user has entered the sentinal value to exit the program, it determines the number of even and odd integers entered. 
//Name: Aurora DiPeso
//University ID:0663597
//Thomas Edison State University
//C Programming: COS-116
//Section No.: OL009
//Semester & Year: 2019OCT

#include <iostream>
#include <stdio.h>

int main() {

	int oddNum = 0, evenNum = 0, num; //variable declaration and sets initial value of counters to zero

	printf("Enter a number (to exit enter 999): "); // request for user input

	while (1) {//beginning of while loop

		scanf_s("%d", &num);

		if (num == 999) break;//sentinal value - if entered the program exits the loop

		if (num % 2 == 0) evenNum++;//if even, add 1 to the even number counter

		else oddNum++;//otherwise add 1 to the odd number counter

	}

	printf("The number of even numbers entered is %d\n", evenNum);// print the number of odd and even numbers entered
	printf("The number of odd numbers entered is %d\n", oddNum);

	return 0;

}


