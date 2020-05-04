#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// This creates a struct for Student, that contains the 
// name, letter grade, number grade and whether it was curved.
typedef struct{
	
	char name[80];
	char letter_grade[3], curved;
	double num_grade;
	
}Student_t;	  // to make a user defined type stand out, use _t in type name

// This creates a single node that includes a pointer to the Student_t struct, and creates a pointer to itself to create a point to the one after. 

typedef struct Node{
	Student_t *st;
	struct Node *next;

} Node_t;


int readGrades(Node_t **);

void calculateLetterGrade(Node_t **);

int printGrades(Node_t*);

void insertToList(Node_t**, Student_t*);
	
void sort(Node_t**);
