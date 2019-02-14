#include <stdio.h>
#include <stdlib.h>

struct complex
{
	double real, img;
};

int main()
{
	struct complex a, b, c;
	char choice;

	printf("Enter real and img part 1st number:\n");
	scanf("%lf",&a.real);
	scanf("%lf",&a.img);
	printf("Enter real and img part 2st number:\n");
	scanf("%lf",&b.real);
	scanf("%lf",&b.img);
	printf("Choose your opeator:\n");
	scanf(" %c",&choice);

	if(choice == '+')
	{
		c.real = a.real + b.real;
		c.img = a.img + b.img;
		printf("Sum of these complex numbers = %.1lf + %.1lfi\n",c.real,c.img);
	}
	else if(choice == '-')
	{
		c.real = a.real - b.real;
		c.img = a.img - b.img;
		printf("Difference of these complex numbers = %.1lf + %.1lfi\n",c.real,c.img);
	}
	else if(choice == '*')
	{
		c.real = a.real*b.real - a.img*b.img;
		c.img = a.img*b.real + a.real*b.img;
		printf("Multiplication of these complex numbers = %.1lf + %.1lfi\n",c.real,c.img);
	}
}

