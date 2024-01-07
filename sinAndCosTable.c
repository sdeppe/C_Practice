/*
	Sine & Cosine table in (0,1) range
*/
// Simple usage of for loop and interval equation to get .x terms

#include <stdio.h>
#include <math.h> 

int main(void)
{
	double interval, sine_val, cosine_val; // declaration of variables
	int i;

	printf("Sine & Cosine table in (0,1) range\n");

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	for (i = 0; i <= 50; i++)
	{
		interval = i / 50.0;

		sine_val = sin(interval);												// equation for sine
		printf("sin(%lf) = %lf\t", interval, sine_val); // table printing for sine function. 

		cosine_val = cos(interval);												// equation for cosine
		printf("Cos(%lf) = %lf\n", interval, cosine_val); // table printing for cosine function
	}

	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	return 0;
}