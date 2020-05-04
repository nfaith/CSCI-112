#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "student_arr.h" // local header file that defines students data structure 

/* Faith Nelson
 * Program 1, CSCI 112
 * April 9, 2020
 */
 

// This takes in a list of students in a comma seperated file, and calculates their letter grades. Then prints them out to a new file.
int main(){
	Node_t *head = NULL;

	readGrades(&head);
	sort(&head);
	calculateLetterGrade(&head);
	printGrades(head);
	return(0);
}	
