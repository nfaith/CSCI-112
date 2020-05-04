#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"student_arr.h"
// This reads in a file and parses out by comma seperated values. This then put the values into and
// array of Student_t. This returns the number of students. 
int readGrades(Node_t **head){
	
	int strLength = sizeof(char)*128; // This allows for an easy change if memory needs to be larger or smaller. 
	
	char *string; 
	char first[40], last[40], grade[16];
	
	FILE *fileIn;
		
	string = (char*) malloc(strLength);
	if(string == NULL){ // Checks if malloc fails incase memory is not avalible, allowing us to die gracefully. 
		printf("malloc failed.");
		return(-1);
	}
	
	fileIn = fopen("grades.txt", "r");
	if(fileIn == NULL){
		printf("File not found");
		return(-1);
	}		
	
	while(fgets(string, strLength, fileIn) != NULL ){
		
		Student_t *st = malloc(sizeof(Student_t));
		strcpy(last, strtok(string, ","));
		strcpy(first, strtok(NULL, ","));
		strcpy(grade, strtok(NULL, ","));
		
		strcpy(st->name, first);
		strcat(st->name, " ");
		strcat(st->name, last);
		st->num_grade = strtod(grade, NULL);
		insertToList(head, st);
	}
	
	fclose(fileIn);
	return(0);
}
