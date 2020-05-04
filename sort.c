#include<stdlib.h>
#include<stdio.h>
#include"student_arr.h"

// Created a beautiful sort based off the examples found in Public. Love you MaryAnn thank you. 


void sortedList(Node_t**, Node_t*);

// This take in a Node and uses selection sort to sort the list of students. 
void sort(Node_t **head){

	Node_t *sorted = NULL;
	Node_t * cur = *head;

	while(cur != NULL){
		Node_t *toSort  = cur->next;
		sortedList(&sorted, cur);
		cur = toSort;
	}	
	*head = sorted;
	return;

}	

// Is called in sort(), to replace each node in its correct locations in the list. 
void sortedList(Node_t **head, Node_t *toSort){

	Node_t *cur;

	if(*head == NULL || (*head)->st->num_grade < toSort->st->num_grade){
		toSort->next = *head;
		*head = toSort;
	}else{
		cur = *head;
		while(cur->next != NULL && cur->next->st->num_grade > toSort->st->num_grade){
			cur = cur->next;
		}	
		toSort->next = cur->next;
		cur->next = toSort;
	}	
	return;

}	
