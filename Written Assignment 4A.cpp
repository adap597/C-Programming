// Written Assignment 4A.cpp : This program takes user input of integers and places them in a 5x5 array. The program adds each each row and each column, then displays the totals.
//Aurora DiPeso
//UniversityID: 0663597
//Thomas Edison State University
//C Programming: COS-116
//Section no.: OL009
//Semester and Year: 2019OCT

#include <iostream>
#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void)
{
	int a[ROWS][COLS], rowTotals[ROWS] = { 0 }, colTotals[COLS] = { 0 };

	for (int i = 0; i < ROWS; i++) {
		printf("Enter row %d: ", i + 1);
		scanf_s("%d%d%d%d%d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
	}


	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			rowTotals[i] += a[i][j];
			colTotals[j] += a[i][j];
		}
	}

	printf("\nRow totals:");
	for (int i = 0; i < ROWS; i++) {
		printf(" %d", rowTotals[i]);
	}

	printf("\nColumn totals:");
	for (int i = 0; i < COLS; i++) {
		printf(" %d", colTotals[i]);
	}
	printf("\n");

	return 0;
}
