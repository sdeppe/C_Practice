#include <stdio.h>

int main(void)
{
	int speed;
	printf("\nEnter your speed as an interger: ");
	scanf("%d", &speed);
	speed = (speed <= 65) ? (65) : (speed <= 70) ? (70) : (90);
	switch (speed) 
	{
		case 65: printf("\nNo Speeding Ticket\n\n"); break;
		case 70: printf("\nSpeeding Ticket\n\n"); break;
		case 90: printf("\nExpensive Speeding Ticket\n\n"); break;
		default: printf("\nIncorrect Speed\n\n"); //uneeded
	}

	return 0;
}