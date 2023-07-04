#include "main.h"

/**
 * print_chessboard -prints the chessboard
 * @a: array to indicate positions of troops
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 64; i++)
	{
		if (i != 0 && i % 8 == 0)
			_putchar('\n');
		_putchar(a[i / 8][i % 8]);
	}
	putchar('\n');
}
