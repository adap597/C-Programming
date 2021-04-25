// Written Assignment 5 B.cpp : This program creates a structure with one variable called value. The program prompts the user 
//for input and stores them in a linked list. The program will print the contents of the list.

//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C Programming: COS-116
//Section no.: OL009
//Semester and Year: 2019OCT


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct ListNode { //declare global structure type
	int value;
	struct ListNode* link;
}

int main()

{
	struct ListNode* head = NULL;
	struct ListNode* temp, * last;
	struct ListNode* iterator;
	int i;
	for (i = 0; i < 5; i++)
	{
		temp = malloc(sizeof(struct ListNode));//request for memory
		printf("Enter a number	:");//Request user input
		scanf_s("%d", &(temp->value));
		temp->link = NULL;
		if (head == NULL)
		{
			last = head = temp;
		}
		else
		{
			last->link = temp;
			last = temp;
		}
	}
	temp = head;
	printf("Values in the list are:");//print values
	while (temp != NULL)
	{
		printf(" %d ", temp->value);
		temp = temp->link;
	}
	printf("\n");
	temp = malloc(sizeof(struct ListNode));//Request for memory
	printf("Adding new number to the list, enter number: ");
	scanf_s("%d", &(temp->value));
	temp->link = NULL;

	if (head == NULL)
	{
		last = head = temp;
	}
	else
	{
		last->link = temp;
		last = temp;
	}
	printf("Values in the list after insertion are: ");
	temp = head;
	while (temp != NULL)
	{
		printf(" %d ", temp->value);
		temp = temp->link;
	}
	printf("\n");
	printf("\n");
	system("pause");
}