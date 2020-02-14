#include<stdio.h>

/* Faith Nelson
 * Lab 1, CSCI 112 
 * January 27, 2020
*/



int main(void){
	
	double hours; // Input hours from user

	double  mins; // Input minutes from user

	float t; // Time in hours since power outage

	float T; // Tempeture of the freezer in degrees  C

	// Collects current time since power outage.
	printf("Enter time since power failure in hours and minutes: ");
	scanf("%le%le", &hours, &mins);

	// Converts time to hours only
	
	t = (hours + (mins/60));

	// Computes temperture csci112.cs.montana.edu
	
	T = (4*(t*t));
	T = T/(t+2);
	T = T - 20;

	printf("Tempurature after power failure for %f  hours is %f.\n ", t,T);

	return(0);
}

