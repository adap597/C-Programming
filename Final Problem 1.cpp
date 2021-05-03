/*Begin this program by creating two arrays of integers, each holding ten elements of data. 
Create a third array of integers for a result array. Your main program will take the two arrays of integers and pass them to the function subtract(). 
Inside the function, subtract the first array from the second array and put the difference into the third array. 
Print the values of all three arrays back in the main program. 
*/

// Final Problem 1.cpp : This program creates 2 arrays with ten elements each, then finds the difference. 
//The first, second, and results array are displayed in the console window. 

//Thomas Edison State University
//C Programming: COS-116
//Section no.: OL009
//Semester and Year: 2019OCT

#include<stdio.h>

void subtract(int first[], int second[], int result[])//function prototype
{
	for (int i = 0; i < 10; i++)
	{
		result[i] = second[i] - first[i];
	}
}

int main()
{
	int first[] = { 2,4,6,8,10,12,14,16,18,20 };//create arrays 
	int second[] = { 1,3,5,7,9,11,13,15,17,19 };
	int result[10];

	subtract(first, second, result);//function call
	printf("First array\n");//print first array
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", first[i]);
	}

	printf("\nSecond array\n");//print second array
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", second[i]);
	}

	printf("\nResult array\n");//print results array
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", result[i]);
	}
}


