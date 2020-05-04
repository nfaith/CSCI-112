#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"student_arr.h"


// This goes through each student and finds the letter grade associated with their given number grade.
void calculateLetterGrade(Node_t **listIn){
	Node_t * cur  = *listIn;	
	
	while(cur != NULL){
		cur->st->curved = 'n';
		if(cur->st->num_grade >= 92.50){
			if(cur->st->num_grade <= 92.9999){
				cur->st->curved = 'y';
			}	
			strcpy(cur->st->letter_grade, "A ");
	 
		}else if(cur->st->num_grade > 89.50){	
			if(cur->st->num_grade <= 89.9999){
				cur->st->curved = 'y';
			}	
			strcpy(cur->st->letter_grade, "A-");

		}else if(cur->st->num_grade > 86.50){
			if(cur->st->num_grade <= 86.9999){
				cur->st->curved = 'y';
			}	
			strcpy(cur->st->letter_grade, "B+");

		}else if(cur->st->num_grade > 82.50){
			if(cur->st->num_grade < 82.9999){
				cur->st->curved = 'y';
			}
			strcpy(cur->st->letter_grade, "B ");

		}else if(cur->st->num_grade > 79.50){
			if(cur->st->num_grade <= 79.9999){
				cur->st->curved = 'y';
			}	
			strcpy(cur->st->letter_grade, "B-");

		}else if(cur->st->num_grade > 76.50){
			if(cur->st->num_grade <= 76.9999){
				cur->st->curved = 'y';
			}	
			strcpy(cur->st->letter_grade, "C+");

		}else if(cur->st->num_grade > 72.50){
			if(cur->st->num_grade <= 72.9999){
				cur->st->curved = 'y';
			}
			strcpy(cur->st->letter_grade, "C ");	
		
		}else if(cur->st->num_grade > 69.50){
			if(cur->st->num_grade <= 69.9999){
				cur->st->curved = 'y';
			}
			strcpy(cur->st->letter_grade, "C-");

		}else if(cur->st->num_grade > 66.50){
			if(cur->st->num_grade <= 66.9999){
				cur->st->curved = 'y';
			}
			strcpy(cur->st->letter_grade, "D+");

		}else if(cur->st->num_grade > 62.50){
			if(cur->st->num_grade <= 62.9999){
				cur->st->curved = 'y';
			}
			strcpy(cur->st->letter_grade, "D ");	
		}else{
			strcpy(cur->st->letter_grade, "D-");
		}
		
		cur = cur->next;;
	}
}
