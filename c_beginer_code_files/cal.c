#include <stdio.h>

/**
 * main - perform calculation on two numbers
 * Return: 0
 */
int main(void)
{

	printf("\n\n===*HSMART-BOT*===");

	printf("\n\nHello!! >>HSMART-BOT will do your basic calculations!<<\n");

	float a, b;
	int d; 
	int i;

	do {

	printf("\ninput first num and press enter:");
	scanf("%g", &a);
	printf("\ninput second num and press enter:");
	scanf("%g", &b);
	printf("\ncal-type: please select and press enter>> (1) for sum,");
	printf(" (2) for minus, (3) for divde, (4) for multiply:");

	scanf("%d", &d);

	switch (d)
	{
	case 1:
		printf("\nThe sum of your input [%g + %g] is =%3g\n\n", a, b, a + b);
		break;
	case 2:
		printf("\nThe difference of your input [%g - %g] is =%3g\n\n", a, b, a - b);
		break;
	case 3:
		printf("\nThe Quotient of your input [%g / %g] is =%3g\n\n", a, b, a / b);
		break;
	case 4:
		printf("\nThe product of your input [%g x %g] is =%3g\n\n", a, b, a * b);
		break;
	default:
	{
		printf("\n\nERROR!! >>No matching cal-type selected!");
		

		printf("--> **please select either (1),(2),(3) or (4)**\n\n");
	}
	}

	printf("Do you want to perform another calculation [1: yes / 2: Quit]:");
	scanf("%d", &i);

	} while (i == 1);

	printf("\n\nYOU QUIT\n\n===*HSMART-BOT*===\n\n");

	return (0);
}
