// Written Assignment 4B Part b.cpp : This program uses a function to display the array channels using pointer notation *channels
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
	display(channels);// function call
	return 0;
}
void display(int channels[NUMBERS])//function header line
{
	int i;
	for (i = 0; i < NUMBERS; i++)
		printf("Element %d is %d\n", i, *(channels + i));//display the array elements using pointer notation
	printf("\n\nChange the addresses \n\n");
	for (i = 0; i < NUMBERS; i++, *channels++)
		printf("Element %d is %d\n", i, *channels);

}