#include <stdio.h>

/**
 * main - entry poiunt
 * Return: sum of even valued terms in the suit of fibonnaci
 */
int main(void)
{
	long int sum;
	long int lastNumber = 1;
	long int currentNumber = 1;
	long int sumtot;
	int i;

	sumtot = 0;
	for (i = 1; i <= 49; i++)
	{
		sum = lastNumber + currentNumber;
		lastNumber = currentNumber;
		currentNumber = sum;
		if (!(sum > 4000000))
		{
			if (sum % 2 == 0)
			{
				sumtot = sumtot + sum;
			}
		}
	}
	printf("%ld", sumtot);
	printf("\n");

	return (0);
}
