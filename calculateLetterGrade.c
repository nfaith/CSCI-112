#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"student_arr.h"


// This goes through each student and finds the letter grade associated with their given number grade.
void calculateLetterGrade(Student_t listIn[], int counter){
	int i = 0; 
	
	while(i < counter){
		listIn[i].curved = 'n';
		if(listIn[i].num_grade >= 92.50){
			if(listIn[i].num_grade <= 92.9999){
				listIn[i].curved = 'y';
			}	
			strcpy(listIn[i].letter_grade, "A ");
	 
		}else if(listIn[i].num_grade > 89.50){	
			if(listIn[i].num_grade <= 89.9999){
				listIn[i].curved = 'y';
			}	
			strcpy(listIn[i].letter_grade, "A-");

		}else if(listIn[i].num_grade > 86.50){
			if(listIn[i].num_grade <= 86.9999){
				listIn[i].curved = 'y';
			}	
			strcpy(listIn[i].letter_grade, "B+");

		}else if(listIn[i].num_grade > 82.50){
			if(listIn[i].num_grade < 82.9999){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "B ");

		}else if(listIn[i].num_grade > 79.50){
			if(listIn[i].num_grade <= 79.9999){
				listIn[i].curved = 'y';
			}	
			strcpy(listIn[i].letter_grade, "B-");

		}else if(listIn[i].num_grade > 76.50){
			if(listIn[i].num_grade <= 76.9999){
				listIn[i].curved = 'y';
			}	
			strcpy(listIn[i].letter_grade, "C+");

		}else if(listIn[i].num_grade > 72.50){
			if(listIn[i].num_grade <= 72.9999){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "C ");	
		
		}else if(listIn[i].num_grade > 69.50){
			if(listIn[i].num_grade <= 69.9999){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "C-");

		}else if(listIn[i].num_grade > 66.50){
			if(listIn[i].num_grade <= 66.9999){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "D+");

		}else if(listIn[i].num_grade > 62.50){
			if(listIn[i].num_grade <= 62.9999){
				listIn[i].curved = 'y';
			}
			strcpy(listIn[i].letter_grade, "D ");	
		}else{
			strcpy(listIn[i].letter_grade, "D-");
		}
		i++;
	}
}
