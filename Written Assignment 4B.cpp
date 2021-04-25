// Written Assignment 4B.cpp : This program stores the numbers shown below in an array and displays using pointer notation *(channels + i).
//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C Programming: COS-116
//Section no.:OL009
//Semester & Year: 2019OCT


#include <stdio.h>
#define NUMBERS 7

void display(int[NUMBERS]);//function prototype
int main()
{
	int channels[NUMBERS] = { 2,4,5,7,9,11,13 };
	display(channels);//function call
	return 0;
}
void display(int channels[NUMBERS])
{
	int i;
	for (i = 0; i < NUMBERS; i++)
		printf("Element %d is %d\n", i, *(channels + i));//display array elements using pointer notation
}







