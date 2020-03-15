#include<stdio.h>
#include<stdlib.h>

/* Faith Nelson
 * CSCI 112, lab 6
 * March 15, 2020
*/ 

// This will take in a string of chars, that will then be converted into a cypher
// and then write them out to a file.
void encrypt(char *stringIn, FILE *fOut){
	int num;
	char key[27] = "efghijklmnopqrstuvwxyzabcd";
	char letter;
	while(*stringIn){
		if(*stringIn >= (char)97 && *stringIn <= (char)122){
			num = (int)(*stringIn) - 97;
			letter = key[num];
			fprintf(fOut,"%c", letter);
		}else if(*stringIn == ' '|| *stringIn == '\n'){
			fprintf(fOut, "%c", *stringIn);
		}	
		stringIn++;	
	}	
}	

// This takes in a file from /public/examples/lab6/ called tinyTale.txt and then runs it 
// through my encrypt function and prints out the original txt as well as the txt encrpted. 
int main(void){

	char *string; 
	int strLength = sizeof(char)*128; // This allows for an easy change if memory needs to be larger or smaller. 
	FILE *fileIn;
	FILE *fileOut;

	fileIn = fopen("/public/examples/lab6/tinyTale.txt","r");
	fileOut = fopen("encrypted_tinyTale.txt","w");
	
	string = (char*) malloc(strLength);

	if(string == NULL){ // Checks if malloc fails incase memory is not avalible, allowing us to die gracefully. 
		printf("malloc failed.");
		return(-1);
	}	

	if(fileIn == NULL){
		printf("File not found");
		free(string); // “Free at last, Free at last, Thank God almighty we are free at last.” MLK Jr.
		return(-1);
	}	
	
	while(fgets(string, strLength, fileIn) != NULL){
		fprintf(fileOut, "%s", string);
		encrypt(string, fileOut);
	}
	fclose(fileIn);
	fclose(fileOut);
	free(string); // “Free at last, Free at last, Thank God almighty we are free at last.” MLK Jr.
	return(0);
}	
