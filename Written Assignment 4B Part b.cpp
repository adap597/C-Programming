/*If you choose to answer problem 1 in Section B, you must complete both parts a and b.
a. Write a C program that has a declaration in main() to store the following numbers into an array named channels: 2, 4, 5, 7, 9, 11, 13. 
There should be a function call to display() that accepts the channels as an argument named channels and then displays the numbers 
using the pointer notation *(channels + i).
b. Modify this display() function to alter the address in channels. Always use the expression *channels rather than *(channels + i) to retrieve the correct elements.
*/

// Written Assignment 4B Part b.cpp : This program uses a function to display the array channels using pointer notation *channels
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
