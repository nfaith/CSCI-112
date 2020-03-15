#include <stdio.h>
#include<string.h>
#include<math.h>

/* Faith Nelson
 * Lab 5, CSCI 112
 * March 8, 2020
*/ 


// This searches through a given list to find an object in the list and return the location.
 
int search(char listIn[][7], int listSize ,char target[] ){
	int boolean = 0;
	int index;
	int equality;

	for (int i = 0; i < listSize; i++){
		equality = strcmp(listIn[i], target);
		if(equality == 0){
			boolean = 1;
			index = i;
		}	
	}
	if(boolean == 1){
		return index;
	}else{	
		return (-1);
	}
}

// This find a resistors resistance based of the color bands. Takes 3 inputs from user and then computes based of location and color. 
int main(void){
	char COLOR_CODES[10][7] = {"black","brown","red","orange","yellow","green","blue","violet","grey", "white"};
	int boolean = 2; // Will change by the end of program.
	char band1[7], band2[7],band3[7];
	double multiplier1, multiplier2,  multiplier3, resistor;
	char answer;
	do{
	
		printf("Enter the colors of the resistor's 3 bands, beginnning with band nearest the end. Type the colors in lowercase letters only, NO CAPS.\n");
		
		printf("Band 1 =>");
		scanf("%s",band1 );
		multiplier1 = search(COLOR_CODES, 10, band1);	
		
		printf("\nBand 2 =>");
		scanf("%s", band2);
		multiplier2 = search(COLOR_CODES, 10, band2);
		
		printf("\nBand 3 =>");
		scanf("%s", band3);
		multiplier3 = search(COLOR_CODES, 10, band3);

		if(multiplier1 == -1){
			printf("Invalid color: %s", band1);
		}else if(multiplier2 == -1){
			printf("Invalid color: %s", band2);
		}else if(multiplier3 == -1){
			printf("Invalid color: %s", band3);
		}else{
			resistor = ((10*multiplier1+multiplier2)*(pow(10,multiplier3)))/1000; // This is where the math takes place. 
			printf("Resistance value: %lf kilo-ohms\n", resistor);
		}	
		printf("Do you want to decode another resistor?");
		scanf("%c", &answer);
		while(boolean != 0|| boolean != 1){ // This is where the user is forced to choose the correct value. 
			if(answer == 'y'|| answer == 'Y'){
				boolean = 0;
			} else if (answer == 'n'|| answer == 'N'){
				boolean = 1;
			}else{
				printf("Bad answer, try again\n");
				printf("Do you want to decode another resistor?");
				scanf("%c", &answer);

			}
		}	
			
	}while(boolean != 1);
	
	return (0);
}	
