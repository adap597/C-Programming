/*Write a program to prompt a user for a file name. Count:
the number of characters in the file (letters or numbers)
the number of words in the file
the number of lines in the file
*/

// Written Assignment 6A.cpp : This program requests the user to enter a file name. The program will determine
//how many lines, words, and characters are in the file.

//Thomas Edison State University
//C Programming: COS-116
//Section no.: OL009
//Semester and Year: 2019OCT

#include <stdio.h>

int main()
{
	FILE* fp;
	char filename[100];
	char ch;
	int linecount, wordcount, charcount;

	// set counter variables to zero
	linecount = 0;
	wordcount = 0;
	charcount = 0;

	// Prompt user to enter filename
	printf("Enter a filename :");
	gets(filename);

	// Open file in read-only mode
	fp = fopen(filename, "r");

	// If file opened successfully, then write the string to file
	if (fp)
	{
		//Repeat until End Of File character is reached.	
		while ((ch = getc(fp)) != EOF) {
			// Increment character count if NOT new line or space
			if (ch != ' ' && ch != '\n') { ++charcount; }

			// Increment word count if new line or space character
			if (ch == ' ' || ch == '\n') { ++wordcount; }

			// Increment line count if new line character
			if (ch == '\n') { ++linecount; }

		}

		if (charcount > 0) {
			++linecount;
			++wordcount;
		}
	}
	else
	{//print error message if file could not be opened
		printf("Failed to open the file\n");
	}
	//print line, word,character count
	printf("The number of lines in the file is : %d \n", linecount);
	printf("The number of words in the file is : %d \n", wordcount);
	printf("The number of characters in the file is : %d \n", charcount);

	getchar();
	return(0);
}
