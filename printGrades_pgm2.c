#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "student_arr.h" // local header file that defines students data structure 

// This prints out an array of students into a file.
int  printGrades(Node_t *listIn){
	
	FILE *fileOut;
	fileOut = fopen("final_grades.txt", "w");
	
	if(fileOut == NULL){
		printf("File not found");
		return(-1);
	}

	Node_t *cur = listIn;	

	while(cur != NULL){
		fprintf(fileOut, "Name: %s \tGrade: %.4lf %s \tCurved?: %c\n",cur->st->name, cur->st->num_grade, cur->st->letter_grade, cur->st->curved);
		cur = cur->next;;
	}
	fclose(fileOut);
	return(0);
}
