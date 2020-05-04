#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "student_arr.h" // local header file that defines students data structure 

/* Faith Nelson
 * Program 1, CSCI 112
 * April 9, 2020
 */
/* 
// This creates a struct for Student, that contains the 
// name, letter grade, number grade and whether it was curved. 
typedef struct{
	char name[80];
	char letter_grade[3], curved;
	double num_grade;
}Student_t;	

// This reads in a file and parses out by comma seperated values. This then put the values into and
// array of Student_t. This returns the number of students. 
int readGrades(Student_t studentList[]){
	int strLength = sizeof(char)*128; // This allows for an easy change if memory needs to be larger or smaller. 
	int i = 0;
	
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
		strcpy(last, strtok(string, ","));
		strcpy(first, strtok(NULL, ","));
		strcpy(grade, strtok(NULL, ","));
		
		strcpy(studentList[i].name, first);
		strcat(studentList[i].name, " ");
		strcat(studentList[i].name, last);
		studentList[i].num_grade = strtod(grade, NULL);
		i++;
	}
	studentList[i].name[0] = '\0'; // This sets the last name in the list to null so I can easily find the end later. 
	fclose(fileIn);
	return (i);
}

// This goes through each student and finds the letter grade associated with their given number grade.
void calculateLetterGrade(Student_t listIn[], int counter){
	int i = 0; 
	
	while(i < counter){
		listIn[i].curved = 'n';
		if(listIn[i].num_grade >= 93.00){
			strcpy(listIn[i].letter_grade, "A");
	 
		}else if(listIn[i].num_grade > 89.50){	
			if(listIn[i].num_grade <= 89.99){
				listIn[i].curved = 'y';
			}	
			strcpy(listIn[i].letter_grade, "A-");

		}else if(listIn[i].num_grade > 86.50){
			if(listIn[i].num_grade <= 86.99){
				listIn[i].curved = 'y';
			}	
			strcpy(listIn[i].letter_grade, "B+");

		}else if(listIn[i].num_grade > 82.50){
			if(listIn[i].num_grade < 82.99){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "B");

		}else if(listIn[i].num_grade > 79.50){
			if(listIn[i].num_grade <= 79.99){
				listIn[i].curved = 'y';
			}	
			strcpy(listIn[i].letter_grade, "B-");

		}else if(listIn[i].num_grade > 76.50){
			if(listIn[i].num_grade <= 76.99){
				listIn[i].curved = 'y';
			}	
			strcpy(listIn[i].letter_grade, "C+");

		}else if(listIn[i].num_grade > 72.50){
			if(listIn[i].num_grade <= 72.99){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "C");	
		
		}else if(listIn[i].num_grade > 69.50){
			if(listIn[i].num_grade <= 69.99){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "C-");

		}else if(listIn[i].num_grade > 66.50){
			if(listIn[i].num_grade <= 66.99){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "D+");

		}else if(listIn[i].num_grade > 62.50){
			if(listIn[i].num_grade <= 62.99){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "D");	
		}else{
			strcpy(listIn[i].letter_grade, "D-");
		}
		i++;
	}
}

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
		fprintf(fileOut, "Name: %s \tGrade: %.2lf %s            Curved?: %c\n",listIn[i].name, listIn[i].num_grade, listIn[i].letter_grade, listIn[i].curved);
		i++;
	}
	fclose(fileOut);
	return(0);
}
*/
// This takes in a list of students in a comma seperated file, and calculates their letter grades. Then prints them out to a new file.
int main(){
	int stdCount = 0;
	Student_t initial_list[100];
	stdCount  = readGrades(initial_list);
	calculateLetterGrade(initial_list, stdCount);
	printGrades(initial_list, stdCount);
	return(0);
}	
