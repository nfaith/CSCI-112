#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* Faith Nelson
 * Lab 3, CSCI 112
 * 2/12/2020
*/

// This finds the largest, smallest, average,and standard deviation of a set of 
// numbers and then prints them out. 
int findNumbers(int allNums[] , int length){  
	int smallest, largest, total = 0;
	double average, stdDev, sum_squares = 0;
	
	smallest = allNums[0];
	largest = allNums[0];
	// This calculates the largest and smallest numbers.
	for (int i = 0; i < length; i++){
		if(largest <= allNums[i]){
			largest = allNums[i];
		}
		if (smallest >= allNums[i]){
			smallest = allNums[i];
		}
		total += allNums[i];
		sum_squares += pow((double)allNums[i], (double)2);

	}
	// This calculates the average of the numbers.
	average =(double) total/(double) length;
	// This calculates the standard deviation of the set.
	stdDev = sqrt((double)(sum_squares/(double)length)-  pow(average, (double)2));
	// This prints the calculations made. 
	printf("Smallest: %d, Largest: %d, Average: %.2lf, Std Deviation: %.2lf\n",smallest, largest, average, stdDev);
	return(0);
}	

// Creates a random number.

int randomNums(int end){
	
	int num = rand()% end;
	return num;	
}	


int main(void){
	int length;
	int upperBound;
	srand(time(0));

	// Asks the user input on the # of #'s to be created.
	printf("Enter the number of random integers to generate: ");
	scanf("%d", &length);

	// This asks the range in which the numbers should be generated.
	printf("Enter the upper limit of the numbers to generate: ");
	scanf("%d",&upperBound);
	int numbers[length];

	// This actually creates the random list of numbers.
	for(int i = 0; i < length; i++){
		numbers[i] = randomNums(upperBound);
	}

	// This creates the output wanted with all the necessary calulations done. 
	printf("With %d numbers from 1 to %d, generated randomly\n", length, upperBound);
	findNumbers(numbers, length); 
	return(0);	

}	
