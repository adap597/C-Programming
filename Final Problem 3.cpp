// Final Problem 3.cpp : This program uses a macro to determine the smallest of two integers provided by the user. 
//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C Programming: COS-116
//Section no.: OL009
//Semester and Year: 2019OCT

#include<stdio.h>

#define min(x,y) x<y?x:y

int main()
{
	int x, y;
	printf("Enter an integer: \n");
	scanf_s("%d", &x);
	printf("Enter another integer: \n");
	scanf_s("%d", &y);

	printf("Smaller of two is %d", min(x, y));
}
