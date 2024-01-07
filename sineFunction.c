/*
	a program that can give the sine of a value between 0 and 1 (non inclusive). 
*/
#include <stdio.h>
#include <math.h>

int main(void) 
{
	double sine, num;
	printf("Enter a value between 0 and 1: ");
	scanf("%lf", &num);

	sine = sin(num);

	printf("\nThe sine value of %lf = %lf\n", num, sine);
	return 0;
}