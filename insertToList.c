#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "student_arr.h"

void insertToList(Node_t **head, Student_t *student){
	
	Node_t *newNode = malloc(sizeof(Node_t));
	newNode->st = student;
	newNode->next = NULL;

	Node_t *old  = *head;
	*head = newNode;
	newNode->next = old;
	return;

}	
