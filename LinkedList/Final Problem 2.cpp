
/*Write a C program containing a linked list of ten integer numbers. Have the program display the numbers in the list. 
*/

// Final Problem 2.cpp : This program requests the user enter integer numbers. The numbers in the linked list are displayed in the console after
//the user has completed all entries. It will also display the number of nodes in the list. 

//Thomas Edison State University
//C Programming: COS-116
//Section no.: OL009
//Semester and Year: 2019OCT

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void main()
{
	struct node
	{
		int num;
		struct node* ptr;
	};
	typedef struct node NODE;

	NODE* head, * first, * temp = 0;
	int count = 0;
	int choice = 1;
	first = 0;

	while (choice)
	{
		head = (NODE*)malloc(sizeof(NODE));
		printf("Enter an integer\n");
		scanf_s("%d", &head->num);
		if (first != 0)
		{
			temp->ptr = head;
			temp = head;
		}
		else
		{
			first = temp = head;
		}
		fflush(stdin);
		printf("Do you want to continue(Type 0 for NO or 1 for YES)?\n");
		scanf_s("%d", &choice);

	}
	temp->ptr = 0;
	temp = first;
	printf("\n Data in the linked list:\n");
	while (temp != 0)
	{
		printf("%d=>", temp->num);
		count++;
		temp = temp->ptr;
	}
	printf("NULL\n");
	printf("Number of nodes in the list = %d\n", count);
}
