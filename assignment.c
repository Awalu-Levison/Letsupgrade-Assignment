#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description: A program that checks if input number is
 * even number or odd number
 * @n: parameter to check
 * Return: 0 On success
 */
int main(int n)
{
	n = n % 2;
	printf("Enter any number : ");

	/*take input number from user*/
	scanf("%d", &n);

	/*if statement to check the input number*/
	if (n % 2 == 0)
	{
		printf("Number is even\n");
	}
	else
	{
		printf("Number is odd\n");
	}
	return (0);
}
