#include <stdio.h>

/**
 * main -Main block
 * for multiples of 3 print Fizz
 * for multiples of 5 print Buzz
 * for multipes of 3 and 5 print FizzBuzz
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);

		if (i < 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
