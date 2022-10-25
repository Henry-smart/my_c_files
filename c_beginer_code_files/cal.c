#include <stdio.h>

/**
 * main - perform calculates on two numbers
 * Return: 0
 */
int main(void)
{
	int i;

	printf("\n\n===*HsmartBot*===");

	printf("\n\nHello!! >>HsmartBot will do basic calculations!<<\n");

	printf("\nTo calculate press(1 + enter) or (0 + enter)to quit:");

	scanf("%d", &i);

	if(i==1)
		
	{	

	float a;
	float b;
	int dec;

	printf("\ninput first num and press enter:");

	scanf("%g", &a);

	printf("\ninput second num and press enter:");

	scanf("%g", &b);

	printf("\ncal-type: please select and press enter>> (1) for sum, (2) for minus, (3) for divde, (4) for multiply:");

	scanf("%d", &dec);

	if(dec==1)
	{
		printf("\nThe sum of your input [%g + %g] is =%3g\n\n", a, b, a + b);
		main();
	}
	else if(dec==2)
	{
		printf("\nThe difference of your input [%g - %g] is =%3g\n\n", a, b, a - b);
		main();
	}
	else if(dec==3)
	{
		printf("\nThe Quotient of your input [%g / %g] is =%3g\n\n", a, b, a / b);
		main();
	}
	else if(dec==4)
	{
		printf("\nThe product of your input [%g x %g] is =%3g\n\n", a, b, a * b);
		main();
	}
	else
	{
		printf("\n\nERROR!! >>No matching cal-type selected! --> **please select either (1),(2),(3) or (4)**\n\n");
		main();
	}
	}
	else if(i==0)
	{
	printf("\n\nYOU QUITED\n\n===*HsmartBot*===\n\n"); 
	}
	else
	{
	main();
	}

	return (0);

}
