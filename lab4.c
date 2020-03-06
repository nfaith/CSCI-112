#include<stdio.h>
#include<math.h>


/* Faith Nelson
 * Lab 4, CSCI 112
 * March 1, 2020
*/

// Reads in the polygon from a file using file redirection.
// NOTE: In order to work, must access a file using file redirection on terminal.
int get_corners(double x[], double y[]){
	int numItems, counter = 0;
	do{
		numItems = scanf("%lf %lf", &x[counter], &y[counter]);
		counter++;
	}while(numItems > 0);
	return counter;
}	

// Lists out the x and y points  of the polygon.
void output_corners(double  x[], double  y[], int counter){
	
	printf("x		y\n");
	printf("-      	        -\n");
	for(int i = 0; i < counter; i++){
		printf("%lf	%lf\n",x[i], y[i]);	
	}
}

// Calculates the area of the polygon based off points.
void polygon_area(double x[],double y[],int counter){
	double area= 0;
	double sum = 0;
	for(int i = 0; i < counter; i++){
		sum += (x[i+1]+x[i])*(y[i+1]-y[i]);
	}	
	area = (.5)*fabs(sum);
	printf("area of this polygon is %.2lf\n",area);
}	


int main(void){
        double x[20];
	double y[20]; 
	int counter = 0;

	counter = get_corners(x,y);
	
	output_corners( x, y, counter);
	
	polygon_area(x,y,counter);
	return(0);
}	
