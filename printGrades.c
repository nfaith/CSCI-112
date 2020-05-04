#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "student_arr.h" // local header file that defines students data structure 

// This prints out an array of students into a file.
int  printGrades(Student_t listIn[], int counter){
	
	int i = 0;
	FILE *fileOut;
	fileOut = fopen("final_grades.txt", "w");
	
	if(fileOut == NULL){
		printf("File not found");
		return(-1);
	}	
	
	while(i < counter){
		fprintf(fileOut, "Name: %s \tGrade: %.4lf %s \tCurved?: %c\n",listIn[i].name, listIn[i].num_grade, listIn[i].letter_grade, listIn[i].curved);
		i++;
	}
	fclose(fileOut);
	return(0);
}
