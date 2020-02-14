#include<stdio.h>
#include<math.h>

/* Faith Nelson
 * Lab 2, CSCI 112
 * February, 3, 2020
*/

// This function calculates the amount that is discounted to teachers.
double getDiscount(double purchaseAmt, double teacherDiscount){
	double  amountOff;
	int  percent;
	double total;
	percent = teacherDiscount * 100;
	// Takes the % of depending on the individual.
	amountOff  = (purchaseAmt * teacherDiscount);
	total = purchaseAmt - amountOff;
	printf("Teacher's discount (%d%%)  %.2f\n",percent, amountOff);
	printf("Discounted total           %.2f\n", total);
	return(amountOff);
}


int main(void){
	double  SALESTAX = .05;
	double purchaseAmt;
	float taxAdded;
	double total;
	double discountAmt = 0;
	char answer;
	printf("Enter the cost of your items: ");
	scanf("%lf", &purchaseAmt);
	printf("Are you a music teacher (y or n): ");
	scanf(" %c",&answer);

	total = purchaseAmt;
	printf("Total purchases                %.2f\n", purchaseAmt);
	if(answer == 'y'|| answer == 'Y'){
		if(purchaseAmt >= 100){
			discountAmt = getDiscount(purchaseAmt, .12);
		} else {
			discountAmt = getDiscount(purchaseAmt, .10);
		}
		
	}
	total -= discountAmt;
	taxAdded = total * SALESTAX;
       	float roundf(float taxAdded);
	total += taxAdded;	
	printf("Sales Tax (5%%)                  %.2f\n", taxAdded);
	printf("Total                         $ %.2f\n",total);

	return(0);
}
